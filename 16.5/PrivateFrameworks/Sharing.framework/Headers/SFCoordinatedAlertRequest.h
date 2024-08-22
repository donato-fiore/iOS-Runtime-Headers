// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOORDINATEDALERTREQUEST_H
#define SFCOORDINATEDALERTREQUEST_H

@class NSXPCConnection;
@protocol NSSecureCoding, SFXPCInterface, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFCoordinatedAlertRequest : NSObject <NSSecureCoding, SFXPCInterface>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _started;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_start;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)start;


@end


#endif