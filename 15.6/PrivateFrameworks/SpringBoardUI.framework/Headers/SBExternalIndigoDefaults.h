// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBEXTERNALINDIGODEFAULTS_H
#define SBEXTERNALINDIGODEFAULTS_H

@class BSAbstractDefaultDomain;



@interface SBExternalIndigoDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) NSInteger indigoConfigurationFlagsBitmask;


+(id)defaults;
-(BOOL)indigoConfigurationFlagOne;
-(BOOL)indigoConfigurationFlagThree;
-(BOOL)indigoConfigurationFlagTwo;
-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif