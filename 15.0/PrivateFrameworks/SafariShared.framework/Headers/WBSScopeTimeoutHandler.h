// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSCOPETIMEOUTHANDLER_H
#define WBSSCOPETIMEOUTHANDLER_H


#import <Foundation/Foundation.h>


@interface WBSScopeTimeoutHandler : NSObject {
    id *_handler;
}




-(id)init;
-(id)initWithTimeout:(CGFloat)arg0 autoBugCaptureDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
-(id)initWithTimeout:(CGFloat)arg0 handler:(id)arg1 ;
-(void)dealloc;


@end


#endif