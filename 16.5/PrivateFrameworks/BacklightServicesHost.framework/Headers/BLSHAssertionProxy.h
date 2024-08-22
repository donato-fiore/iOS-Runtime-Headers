// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHASSERTIONPROXY_H
#define BLSHASSERTIONPROXY_H

@class NSString, BLSAssertionDescriptor, BLSAssertionIdentifier;
@protocol BLSAssertionServiceResponding, BSInvalidatable, BLSXPCAssertionServiceClientInterface;

#import <Foundation/Foundation.h>


@interface BLSHAssertionProxy : NSObject <BLSAssertionServiceResponding, BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    BOOL _valid;
}


@property (readonly, nonatomic, getter=isAcquired) BOOL acquired; // ivar: _acquired
@property (readonly, nonatomic) NSUInteger acquisitionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BLSAssertionDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BLSAssertionIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<BLSXPCAssertionServiceClientInterface> *remoteTarget; // ivar: _remoteTarget
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 descriptor:(id)arg1 remoteTarget:(id)arg2 ;
-(void)invalidate;
-(void)serviceDidAcquire;
-(void)serviceDidCancelWithError:(id)arg0 ;
-(void)serviceDidPause;
-(void)serviceDidResume;
-(void)serviceFailedToAcquireWithError:(id)arg0 ;
-(void)serviceWillCancel;


@end


#endif