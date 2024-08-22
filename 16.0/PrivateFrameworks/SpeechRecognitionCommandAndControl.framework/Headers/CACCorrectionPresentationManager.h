// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACCORRECTIONPRESENTATIONMANAGER_H
#define CACCORRECTIONPRESENTATIONMANAGER_H

@class NSString, AXElement;
@protocol CACCorrectionsPresentationDelegate, UIPopoverPresentationControllerDelegate;


#import "CACSimpleContentViewManager.h"

@interface CACCorrectionPresentationManager : CACSimpleContentViewManager <CACCorrectionsPresentationDelegate, UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXElement *element; // ivar: _element
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)remoteViewType;
+(int)axNotification;
-(BOOL)isOverlay;
-(void)_showCorrectionsForElement:(id)arg0 fromString:(id)arg1 withAlternatives:(id)arg2 withEmojis:(id)arg3 portraitUpRect:(struct CGRect )arg4 ;
-(void)correctionsPresentationViewController:(id)arg0 didSelectItemWithText:(id)arg1 ;
-(void)dismissCorrectionsPresentationViewController:(id)arg0 ;
-(void)handleAXNotificationData:(*void)arg0 ;
-(void)hideIfNeededForElements:(id)arg0 ;
-(void)showCorrectionsForElement:(id)arg0 nBestStrings:(id)arg1 ;


@end


#endif