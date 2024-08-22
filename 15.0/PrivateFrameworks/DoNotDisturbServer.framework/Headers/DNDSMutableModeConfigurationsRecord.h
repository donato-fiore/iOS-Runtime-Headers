// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMUTABLEMODECONFIGURATIONSRECORD_H
#define DNDSMUTABLEMODECONFIGURATIONSRECORD_H



#import "DNDSModeConfigurationsRecord.h"

@interface DNDSMutableModeConfigurationsRecord : DNDSModeConfigurationsRecord



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setConfiguration:(id)arg0 forModeIdentifier:(id)arg1 ;
-(void)setMode:(id)arg0 forModeIdentifier:(id)arg1 ;
-(void)setModeConfiguration:(id)arg0 forModeIdentifier:(id)arg1 ;
-(void)setTriggers:(id)arg0 forModeIdentifier:(id)arg1 ;


@end


#endif