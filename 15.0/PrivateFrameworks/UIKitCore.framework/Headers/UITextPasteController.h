// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTPASTECONTROLLER_H
#define UITEXTPASTECONTROLLER_H

@class NSMapTable, NSString;
@protocol UITextPasteCoordinatorDelegate, UITextPasteConfigurationSupporting_Internal;

#import <Foundation/Foundation.h>


@interface UITextPasteController : NSObject <UITextPasteCoordinatorDelegate>

 {
    NSMapTable *_sessions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UITextPasteConfigurationSupporting_Internal> *supportingView; // ivar: _supportingView


+(id)combineAttributedStrings:(id)arg0 addingSeparation:(BOOL)arg1 ;
-(BOOL)_pasteDelegateHandlesPasting;
-(id)_clampRange:(id)arg0 ;
-(id)_combineItemAttributedStrings:(id)arg0 forRange:(id)arg1 ;
-(id)beginDroppingItems:(id)arg0 toSelectedRange:(id)arg1 progressSupport:(id)arg2 animated:(BOOL)arg3 ;
-(id)beginDroppingItems:(id)arg0 toSelectedRange:(id)arg1 progressSupport:(id)arg2 animated:(BOOL)arg3 delegate:(id)arg4 ;
-(id)beginPastingItems:(id)arg0 toRange:(id)arg1 ;
-(id)beginPastingItems:(id)arg0 toRange:(id)arg1 delegate:(id)arg2 matchesTextStyles:(BOOL)arg3 ;
-(id)initWithSupportingView:(id)arg0 ;
-(void)_executePasteForSession:(id)arg0 ;
-(void)_performPasteOfAttributedString:(id)arg0 toRange:(id)arg1 forSession:(id)arg2 completion:(id)arg3 ;
-(void)_restorePasteResultForSession:(id)arg0 ;
-(void)_transformTextPasteItem:(id)arg0 ;
-(void)coordinator:(id)arg0 endPastingItems:(id)arg1 ;


@end


#endif