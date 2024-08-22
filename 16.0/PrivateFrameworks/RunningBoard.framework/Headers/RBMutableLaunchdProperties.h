// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBMUTABLELAUNCHDPROPERTIES_H
#define RBMUTABLELAUNCHDPROPERTIES_H



#import "RBLaunchdProperties.h"

@interface RBMutableLaunchdProperties : RBLaunchdProperties



-(id)initWithProperties:(id)arg0 ;
-(void)setDisableFreezing:(BOOL)arg0 ;
-(void)setDoesOverrideManagement:(BOOL)arg0 ;
-(void)setExecutablePath:(id)arg0 ;
-(void)setHostPid:(int)arg0 ;
-(void)setIsAngel;
-(void)setIsDaemon;
-(void)setJobLabel:(id)arg0 ;
-(void)setMultiInstance:(BOOL)arg0 ;
-(void)setOverrideManageFlags:(unsigned char)arg0 ;
-(void)setPath:(id)arg0 ;
-(void)setSpecifiedIdentity:(id)arg0 ;
-(void)setUnderlyingAssertion:(id)arg0 ;
-(void)setVariableEUID:(BOOL)arg0 ;


@end


#endif