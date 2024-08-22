// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMNANOIDSREQUEST_H
#define FMNANOIDSREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FMDispatchTimer.h"

@interface FMNanoIDSRequest : NSObject

@property (retain, nonatomic) NSString *idsMessageID; // ivar: _idsMessageID
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) FMDispatchTimer *timer; // ivar: _timer




@end


#endif