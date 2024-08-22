// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDMODECONFIGURATIONAPPFOREGROUNDTRIGGER_H
#define DNDMODECONFIGURATIONAPPFOREGROUNDTRIGGER_H

@class NSString;


#import "DNDModeConfigurationTrigger.h"
#import "DNDApplicationIdentifier.h"

@interface DNDModeConfigurationAppForegroundTrigger : DNDModeConfigurationTrigger

@property (readonly, copy, nonatomic) DNDApplicationIdentifier *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;


+(BOOL)supportsSecureCoding;
-(BOOL)hasSecureData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithApplicationIdentifier:(id)arg0 enabledSetting:(NSUInteger)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 enabledSetting:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif