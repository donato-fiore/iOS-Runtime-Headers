// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCONTENTSYNDICATIONSAVETOLIBRARYACTIVITY_H
#define PUCONTENTSYNDICATIONSAVETOLIBRARYACTIVITY_H

@class UIActivity, NSString;
@protocol PXActivity, PXActivityItemSourceController;



@interface PUContentSyndicationSaveToLibraryActivity : UIActivity <PXActivity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXActivityItemSourceController> *itemSourceController; // ivar: itemSourceController
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)performActivity;


@end


#endif