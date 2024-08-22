// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BIOMETRICOPERATION_H
#define BIOMETRICOPERATION_H


#import <Foundation/Foundation.h>

#import "BiometricKitXPCExportedClientObject.h"

@interface BiometricOperation : NSObject

@property (readonly, nonatomic) unsigned int cancelledMessage; // ivar: _cancelledMessage
@property (retain, nonatomic) BiometricKitXPCExportedClientObject *client; // ivar: _client
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) int status; // ivar: _status
@property (readonly, nonatomic) unsigned int taskPausedMessage;
@property (readonly, nonatomic) unsigned int taskResumeFailedMessage;
@property (readonly, nonatomic) unsigned int taskResumedMessage;
@property (readonly, nonatomic) int type;


-(id)description;
-(id)init;


@end


#endif