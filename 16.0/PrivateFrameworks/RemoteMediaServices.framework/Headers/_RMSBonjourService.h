// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RMSBONJOURSERVICE_H
#define _RMSBONJOURSERVICE_H

@class NSNetService;

#import <Foundation/Foundation.h>

#import "RMSService.h"

@interface _RMSBonjourService : NSObject

@property (nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (retain, nonatomic) NSNetService *netService; // ivar: _netService
@property (retain, nonatomic) RMSService *service; // ivar: _service
@property (nonatomic) NSInteger state; // ivar: _state




@end


#endif