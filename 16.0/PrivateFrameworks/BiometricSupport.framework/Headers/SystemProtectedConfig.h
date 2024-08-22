// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYSTEMPROTECTEDCONFIG_H
#define SYSTEMPROTECTEDCONFIG_H


#import <Foundation/Foundation.h>


@interface SystemProtectedConfig : NSObject

@property (nonatomic) int biometryEnabled; // ivar: _biometryEnabled
@property (nonatomic) int identificationEnabled; // ivar: _identificationEnabled
@property (nonatomic) int loginEnabled; // ivar: _loginEnabled
@property (nonatomic) int periocularMatchEnabled; // ivar: _periocularMatchEnabled
@property (nonatomic) int unlockEnabled; // ivar: _unlockEnabled
@property (nonatomic) int unlockTokenMaxLifetime; // ivar: _unlockTokenMaxLifetime


-(id)init;


@end


#endif