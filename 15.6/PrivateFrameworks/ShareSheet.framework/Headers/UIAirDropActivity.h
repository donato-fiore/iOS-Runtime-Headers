// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAIRDROPACTIVITY_H
#define UIAIRDROPACTIVITY_H



#import "UIActivity.h"

@interface UIAirDropActivity : UIActivity



+(BOOL)canPerformActivityWithItemClasses:(id)arg0 ;
+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
+(id)classNamesForItems:(id)arg0 ;
+(id)classesForClassNames:(id)arg0 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(id)activityType;
-(struct CGSize )_thumbnailSize;


@end


#endif