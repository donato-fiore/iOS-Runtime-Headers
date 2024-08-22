// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USERPROTECTEDCONFIG_H
#define USERPROTECTEDCONFIG_H


#import <Foundation/Foundation.h>


@interface UserProtectedConfig : NSObject

@property (nonatomic) int applePayEnabled; // ivar: _applePayEnabled
@property (nonatomic) int attentionDetectionEnabled; // ivar: _attentionDetectionEnabled
@property (nonatomic) int identificationEnabled; // ivar: _identificationEnabled
@property (nonatomic) int loginEnabled; // ivar: _loginEnabled
@property (nonatomic) int periocularMatchEnabled; // ivar: _periocularMatchEnabled
@property (nonatomic) int unlockEnabled; // ivar: _unlockEnabled


-(id)init;


@end


#endif