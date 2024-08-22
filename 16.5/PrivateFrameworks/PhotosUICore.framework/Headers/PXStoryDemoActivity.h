// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYDEMOACTIVITY_H
#define PXSTORYDEMOACTIVITY_H



#import "PXActivity.h"

@interface PXStoryDemoActivity : PXActivity



+(NSInteger)activityCategory;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)assets;


@end


#endif