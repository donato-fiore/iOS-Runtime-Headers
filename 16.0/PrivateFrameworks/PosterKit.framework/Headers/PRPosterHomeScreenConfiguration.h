// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERHOMESCREENCONFIGURATION_H
#define PRPOSTERHOMESCREENCONFIGURATION_H

@class NSString;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PRPosterGradientHomeScreenAppearance.h"
#import "PRPosterHomePosterHomeScreenAppearance.h"
#import "PRPosterLockPosterHomeScreenAppearance.h"
#import "PRPosterHomeScreenAppearance.h"
#import "PRPosterSolidColorHomeScreenAppearance.h"

@interface PRPosterHomeScreenConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) PRPosterGradientHomeScreenAppearance *gradientAppearance;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) PRPosterHomePosterHomeScreenAppearance *homePosterAppearance;
@property (readonly, copy, nonatomic) PRPosterLockPosterHomeScreenAppearance *lockPosterAppearance;
@property (readonly, copy, nonatomic) PRPosterHomeScreenAppearance *selectedAppearance;
@property (readonly, nonatomic) NSUInteger selectedAppearanceType;
@property (readonly, copy, nonatomic) PRPosterSolidColorHomeScreenAppearance *solidColorAppearance;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)defaultHomeSceenConfigurationForBundleID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(id)configurationApplyingColorPickerConfigurationsFromConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeScreenConfiguration:(id)arg0 ;
-(id)initWithSelectedAppearanceType:(NSUInteger)arg0 lockPosterAppearance:(id)arg1 solidColorAppearance:(id)arg2 gradientAppearance:(id)arg3 homePosterAppearance:(id)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif