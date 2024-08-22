// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSCKCONFIG_H
#define DRSCKCONFIG_H


#import <Foundation/Foundation.h>


@interface DRSCKConfig : NSObject

@property (readonly, nonatomic) NSInteger ckContainerEnvironment;
@property (readonly, nonatomic) NSInteger ckRapidEnvironment;
@property (readonly, nonatomic) unsigned char containerEnvironment; // ivar: _containerEnvironment
@property (readonly, nonatomic) BOOL overridesDefault; // ivar: _overridesDefault
@property (readonly, nonatomic) unsigned char rapidEnvironment; // ivar: _rapidEnvironment


+(id)_configWithConfigMO_ON_MOC_QUEUE:(id)arg0 ;
+(id)defaultConfig;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithContainerEnvironment:(unsigned char)arg0 rapidEnvironment:(unsigned char)arg1 overridesDefault:(BOOL)arg2 ;
-(id)newConfigMOInContext_ON_MOC_QUEUE:(id)arg0 ;


@end


#endif