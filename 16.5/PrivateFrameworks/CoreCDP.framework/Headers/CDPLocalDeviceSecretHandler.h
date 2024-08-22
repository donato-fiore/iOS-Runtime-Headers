// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPLOCALDEVICESECRETHANDLER_H
#define CDPLOCALDEVICESECRETHANDLER_H

@protocol CDPLocalDeviceSecretHandlerProtocol;

#import <Foundation/Foundation.h>

#import "CDPContext.h"

@interface CDPLocalDeviceSecretHandler : NSObject {
    id<CDPLocalDeviceSecretHandlerProtocol> *_handlerProxy;
}


@property (readonly, nonatomic) CDPContext *context; // ivar: _context


-(id)initWithContext:(id)arg0 handler:(id)arg1 ;
-(void)userDidCancelWithError:(id)arg0 ;
-(void)userDidEnterValidSecret:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif