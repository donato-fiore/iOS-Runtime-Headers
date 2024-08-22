// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDMUTABLECONFIGURATION_H
#define DNDMUTABLECONFIGURATION_H

@class NSDictionary, NSSet;


#import "DNDConfiguration.h"
#import "DNDSenderConfiguration.h"

@interface DNDMutableConfiguration : DNDConfiguration

@property (copy, nonatomic) NSDictionary *allowedApplicationIdentifiers;
@property (nonatomic) NSUInteger applicationConfigurationType;
@property (nonatomic) NSInteger compatibilityVersion;
@property (copy, nonatomic) NSSet *deniedApplicationIdentifiers;
@property (nonatomic) NSUInteger hideApplicationBadges;
@property (nonatomic) NSUInteger minimumBreakthroughUrgency;
@property (copy, nonatomic) DNDSenderConfiguration *senderConfiguration;
@property (nonatomic) NSUInteger senderConfigurationType;
@property (nonatomic) NSUInteger suppressionType;


+(id)configurationOfType:(NSUInteger)arg0 ;
+(id)defaultConfiguration;
-(BOOL)hasSecureData;
-(id)_configurationForApplicationIdentifier:(id)arg0 ;
-(void)removeExceptionForApplication:(id)arg0 ;
-(void)removeExceptionForApplication:(id)arg0 thread:(id)arg1 ;
-(void)removeExceptionForApplicationIdentifier:(id)arg0 ;
-(void)removeExceptionForApplicationIdentifier:(id)arg0 thread:(id)arg1 ;
-(void)removeExceptionForContact:(id)arg0 ;
-(void)removeExceptionForContactGroup:(id)arg0 ;
-(void)removeExceptionForContactType:(NSUInteger)arg0 ;
-(void)setAllowedApplications:(id)arg0 ;
-(void)setDeniedApplications:(id)arg0 ;
-(void)setExceptionForApplication:(id)arg0 ;
-(void)setExceptionForApplication:(id)arg0 thread:(id)arg1 ;
-(void)setExceptionForApplicationIdentifier:(id)arg0 ;
-(void)setExceptionForApplicationIdentifier:(id)arg0 thread:(id)arg1 ;
-(void)setExceptionForContact:(id)arg0 ;
-(void)setExceptionForContactGroup:(id)arg0 ;
-(void)setExceptionForContactType:(NSUInteger)arg0 ;
-(void)setExceptionOfType:(NSUInteger)arg0 forApplication:(id)arg1 ;
-(void)setExceptionOfType:(NSUInteger)arg0 forApplication:(id)arg1 thread:(id)arg2 ;
-(void)setExceptionOfType:(NSUInteger)arg0 forApplicationIdentifier:(id)arg1 ;
-(void)setExceptionOfType:(NSUInteger)arg0 forApplicationIdentifier:(id)arg1 thread:(id)arg2 ;
-(void)setExceptionOfType:(NSUInteger)arg0 forContact:(id)arg1 ;
-(void)setExceptionOfType:(NSUInteger)arg0 forContactGroup:(id)arg1 ;
-(void)setExceptionOfType:(NSUInteger)arg0 forContactType:(NSUInteger)arg1 ;
-(void)setPhoneCallBypassSettings:(id)arg0 ;


@end


#endif