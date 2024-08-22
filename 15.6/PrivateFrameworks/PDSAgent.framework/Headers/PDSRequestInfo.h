// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSREQUESTINFO_H
#define PDSREQUESTINFO_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PDSRequestInfo : NSObject

@property (retain, nonatomic) NSDate *heartbeatDate; // ivar: _heartbeatDate
@property (nonatomic) NSUInteger regReason; // ivar: _regReason


-(id)init;
-(id)initWithRegistrationReason:(NSUInteger)arg0 nextHeartbeatDate:(id)arg1 ;


@end


#endif