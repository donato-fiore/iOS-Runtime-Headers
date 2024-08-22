// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HVCONSUMERSTATE_H
#define HVCONSUMERSTATE_H


#import <Foundation/Foundation.h>


@interface HVConsumerState : NSObject

@property (nonatomic) unsigned int documentsConsumed; // ivar: _documentsConsumed
@property (nonatomic) unsigned int documentsIgnored; // ivar: _documentsIgnored
@property (nonatomic) unsigned int errorsReported; // ivar: _errorsReported
@property (nonatomic) unsigned char levelOfService; // ivar: _levelOfService
@property (nonatomic) unsigned int numberOfExtractions; // ivar: _numberOfExtractions
@property (nonatomic) unsigned int numberOfInterruptions; // ivar: _numberOfInterruptions


-(id)description;
-(id)init;


@end


#endif