// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKNOTEEDITORCONTROLLER_H
#define AKNOTEEDITORCONTROLLER_H

@class NSString;
@protocol AKNoteEditorViewControllerDelegate, UIPopoverPresentationControllerDelegate, AKNoteEditorControllerDelegate;

#import <Foundation/Foundation.h>

#import "AKPopupAnnotation.h"
#import "AKNoteEditorViewController.h"

@interface AKNoteEditorController : NSObject <AKNoteEditorViewControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (retain, nonatomic) AKPopupAnnotation *annotation; // ivar: _annotation
@property (retain) AKNoteEditorViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKNoteEditorControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *editedText;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)suggestedEditorHeightForWidth:(CGFloat)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(id)_popupBackgroundColorForPopupAnnotation:(id)arg0 ;
-(id)presentationController:(id)arg0 viewControllerForAdaptivePresentationStyle:(NSInteger)arg1 ;
-(void)beginEditing:(BOOL)arg0 ;
-(void)finishEditing;
-(void)hide;
-(void)noteEditorViewControllerDidBeginEditing:(id)arg0 ;
-(void)noteEditorViewControllerDidEndEditing:(id)arg0 ;
-(void)show:(BOOL)arg0 ;


@end


#endif