// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTDTRACETAPLOCALDELEGATE_H
#define DTDTRACETAPLOCALDELEGATE_H

@class NSMutableArray, NSString;
@protocol DTTapLocalDelegate, OS_xpc_object, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "DTTapLocal.h"
#import "DTDTraceTapConfig.h"

@interface DTDTraceTapLocalDelegate : NSObject <DTTapLocalDelegate>

 {
    DTTapLocal *_tap;
    DTDTraceTapConfig *_config;
    NSObject<OS_xpc_object> *_daemonConnection;
    NSObject<OS_dispatch_semaphore> *_daemonSemaphore;
    NSObject<OS_dispatch_semaphore> *_fragmentsLock;
    NSMutableArray *_fragments;
    NSInteger _filePositionStart;
    BOOL _stopWasCalled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canFetchWhileArchiving;
-(id)_getSessionMetadata;
-(id)initWithConfig:(id)arg0 ;
-(id)validateConfig;
-(void)_prepareXPCConnection;
-(void)fetchDataForReason:(NSUInteger)arg0 block:(id)arg1 ;
-(void)pause;
-(void)setTap:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)unpause;


@end


#endif