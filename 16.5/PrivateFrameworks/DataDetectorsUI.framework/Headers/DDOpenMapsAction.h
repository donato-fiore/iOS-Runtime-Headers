// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDOPENMAPSACTION_H
#define DDOPENMAPSACTION_H



#import "DDAction.h"

@interface DDOpenMapsAction : DDAction



+(BOOL)actionAvailableForCachedEvent:(id)arg0 ;
+(BOOL)actionAvailableForContact:(id)arg0 ;
-(BOOL)canBePerformedByOpeningURL;
-(id)compactTitle;
-(id)iconName;
-(id)localizedName;
-(id)notificationIconBundleIdentifier;
-(id)notificationTitle;
-(id)notificationURL;
-(id)variantIconName;
-(void)performFromView:(id)arg0 ;


@end


#endif