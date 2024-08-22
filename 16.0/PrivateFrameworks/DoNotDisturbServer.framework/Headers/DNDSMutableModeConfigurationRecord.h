// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMUTABLEMODECONFIGURATIONRECORD_H
#define DNDSMUTABLEMODECONFIGURATIONRECORD_H



#import "DNDSModeConfigurationRecord.h"

@interface DNDSMutableModeConfigurationRecord : DNDSModeConfigurationRecord



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setAutomaticallyGenerated:(BOOL)arg0 ;
-(void)setCompatibilityVersion:(NSInteger)arg0 ;
-(void)setConfiguration:(id)arg0 ;
-(void)setCreated:(id)arg0 ;
-(void)setDimsLockScreen:(NSUInteger)arg0 ;
-(void)setEphemeralResolvedCompatibilityVersion:(NSInteger)arg0 ;
-(void)setHasSecureData:(BOOL)arg0 ;
-(void)setImpactsAvailability:(NSUInteger)arg0 ;
-(void)setLastModified:(id)arg0 ;
-(void)setMode:(id)arg0 ;
-(void)setSecureConfiguration:(id)arg0 ;
-(void)setTriggers:(id)arg0 ;


@end


#endif