// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUIAVATARUTILITIES_H
#define AXUIAVATARUTILITIES_H


#import <Foundation/Foundation.h>


@interface AXUIAvatarUtilities : NSObject



+(BOOL)_shouldSkipPresetCategory:(NSInteger)arg0 ;
+(BOOL)avatarFrameworksArePresent;
+(id)_axStringForPresetCategory:(NSInteger)arg0 ;
+(id)customContentForAvatarWithRecord:(id)arg0 ;
+(id)customContentForMemoji:(id)arg0 ;
+(id)descriptionForAnimoji:(id)arg0 ;
+(id)descriptionForAvatarWithRecord:(id)arg0 includeVideoPrefix:(BOOL)arg1 ;
+(id)descriptionForMemoji:(id)arg0 ;
+(void)performValidations;


@end


#endif