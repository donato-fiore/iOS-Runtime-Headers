// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUISHAREACTIVITY_H
#define SUISHAREACTIVITY_H



#import "UIActivity.h"

@interface SUIShareActivity : UIActivity



+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(BOOL)ss_shouldDismissHostsPresentationBeforePerforming;
-(BOOL)ss_shouldExecuteInShareSheet;
-(NSInteger)_defaultSortGroup;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;


@end


#endif