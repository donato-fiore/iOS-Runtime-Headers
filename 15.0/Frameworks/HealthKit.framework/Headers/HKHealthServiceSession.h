// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEALTHSERVICESESSION_H
#define HKHEALTHSERVICESESSION_H

@class NSLock;

#import <Foundation/Foundation.h>

#import "HKHealthService.h"

@interface HKHealthServiceSession : NSObject

@property (copy, nonatomic) id *characteristicsHandler; // ivar: _characteristicsHandler
@property (retain, nonatomic) NSLock *propertyLock; // ivar: _propertyLock
@property (readonly, nonatomic) HKHealthService *service; // ivar: _service
@property (copy, nonatomic) id *sessionHandler; // ivar: _sessionHandler
@property (nonatomic) NSUInteger sessionIdentifier; // ivar: _sessionIdentifier


-(id)initWithService:(id)arg0 ;


@end


#endif