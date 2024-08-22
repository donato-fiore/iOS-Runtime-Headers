// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUNOTTHISPERSONACTIVITY_H
#define PUNOTTHISPERSONACTIVITY_H

@class PXActivity;



@interface PUNotThisPersonActivity : PXActivity



+(NSInteger)_activityStyle;
+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;


@end


#endif