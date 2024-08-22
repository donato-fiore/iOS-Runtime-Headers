// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFNETSERVICE_H
#define HMFNETSERVICE_H

@class NSArray, NSMutableDictionary, NSDictionary, NSString, NSNetService, NSMutableArray;
@protocol HMFLogging, NSNetServiceDelegate, OS_dispatch_queue, HMFNetServiceDelegate;


#import "HMFObject.h"
#import "HMFNetAddress.h"

@interface HMFNetService : HMFObject <HMFLogging, NSNetServiceDelegate>

 {
    os_unfair_lock_s _lock;
    NSUInteger _port;
    NSArray *_addresses;
    NSMutableDictionary *_TXTRecord;
}


@property (readonly, copy) NSDictionary *TXTRecord;
@property (readonly, copy) NSArray *addresses;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFNetServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly, copy) HMFNetAddress *hostName; // ivar: _hostName
@property (readonly, nonatomic) NSNetService *internal; // ivar: _internal
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) NSUInteger port;
@property (getter=isPublishing) BOOL publishing; // ivar: _publishing
@property (readonly, nonatomic) NSMutableArray *resolveBlocks; // ivar: _resolveBlocks
@property (nonatomic) NSInteger resolveRunningState; // ivar: _resolveRunningState
@property (nonatomic) NSInteger resolveState; // ivar: _resolveState
@property (readonly, getter=isResolved) BOOL resolved; // ivar: _resolved
@property (readonly) Class superclass;
@property (readonly, copy) NSString *type; // ivar: _type


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)errorFromNetServiceErrorDict:(id)arg0 ;
+(id)logCategory;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)bestAddress;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithDomain:(id)arg0 type:(id)arg1 name:(id)arg2 ;
-(id)initWithNetService:(id)arg0 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)_reallyResolveWithTimeout:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)confirmWithTimeout:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)netService:(id)arg0 didNotResolve:(id)arg1 ;
-(void)netService:(id)arg0 didUpdateTXTRecordData:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg0 ;
-(void)netServiceDidStop:(id)arg0 ;
-(void)netServiceWillResolve:(id)arg0 ;
-(void)notifyUpdatedAddresses:(id)arg0 ;
-(void)resolveWithTimeout:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)setHostname:(id)arg0 ;
-(void)startMonitoring;
-(void)updateTXTRecordWithData:(id)arg0 ;


@end


#endif