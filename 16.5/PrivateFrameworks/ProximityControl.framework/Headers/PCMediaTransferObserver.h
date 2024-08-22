// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCMEDIATRANSFEROBSERVER_H
#define PCMEDIATRANSFEROBSERVER_H

@class NSXPCConnection;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PCMediaTransferObserver : NSObject <NSSecureCoding>

 {
    BOOL _activateCalled;
    BOOL _invalidated;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *transferBeganHandler; // ivar: _transferBeganHandler
@property (copy, nonatomic) id *transferEndedHandler; // ivar: _transferEndedHandler


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_xpcEnsureStarted;
-(void)_xpcEnsureStopped;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)transferBeganWithContext:(id)arg0 ;
-(void)transferEnded;


@end


#endif