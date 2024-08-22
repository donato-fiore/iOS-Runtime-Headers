// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPCORESERVERWRAPPER_H
#define CPCORESERVERWRAPPER_H


#import <Foundation/Foundation.h>

#import "XPCServer.h"
#import "CPCoreXPCService.h"

@interface CPCoreServerWrapper : NSObject

@property (retain, nonatomic) XPCServer *server; // ivar: _server
@property (retain, nonatomic) CPCoreXPCService *service; // ivar: _service


-(id)init;
-(void)start;
-(void)stop;


@end


#endif