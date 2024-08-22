// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUMESSAGEACTIVITY_H
#define PUMESSAGEACTIVITY_H

@class UIMessageActivity, NSString;
@protocol PXMomentShareSuggestionHandlingActivity, PXActivityItemSourceController;



@interface PUMessageActivity : UIMessageActivity <PXMomentShareSuggestionHandlingActivity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXActivityItemSourceController> *itemSourceController; // ivar: _itemSourceController
@property (readonly) Class superclass;


+(BOOL)canPerformActivityAsIndividualItemsInSourceController:(id)arg0 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityViewController;
-(void)_prepareWithMomentShareLink:(id)arg0 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif