// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFMULTICASTER_H
#define PFMULTICASTER_H

@class NSHashTable, NSMutableSet, NSString;
@protocol PFWeakHashDelegate, PFMulticasterDelegate;

#import <Foundation/Foundation.h>

#import "PFWeakHash.h"

@interface PFMulticaster : NSObject <PFWeakHashDelegate>

 {
    _opaque_pthread_mutex_t _receiverLock;
    NSHashTable *_strongReceivers;
    PFWeakHash *_weakReceivers;
    NSMutableSet *_strongReceiverLists;
    PFWeakHash *_weakReceiverLists;
}


@property (readonly) BOOL acceptingReceivers; // ivar: _acceptingReceivers
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PFMulticasterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL invalidated; // ivar: _invalidated
@property (readonly) Class superclass;


+(BOOL)_isPlaceholderClassByDecodingClassName;
+(BOOL)resolveClassMethod:(SEL)arg0 ;
+(Class)_multicasterClassForProtocolNamed:(id)arg0 ;
+(id)_extractProtocolFromSelectorName:(id)arg0 prefix:(id)arg1 suffix:(id)arg2 ;
+(id)_newProtocolMulticaster;
+(id)_protocolNameByDecodingClassName;
+(id)_subclassNameByEncodingProtocolName:(id)arg0 placeholder:(BOOL)arg1 ;
+(void)_validateProtocol:(id)arg0 ;
+(void)configureClass:(Class)arg0 asMulticasterOf:(id)arg1 ;
-(BOOL)addReceiver:(id)arg0 ;
-(BOOL)addWeakReceiver:(id)arg0 ;
-(BOOL)stopAcceptingReceivers;
-(id)init;
-(void)_enumerateReceiversWithBlock:(id)arg0 ;
-(void)distributeSelector:(SEL)arg0 distributionBlock:(id)arg1 ;
-(void)distributeSelector:(SEL)arg0 toReceivers:(id)arg1 distributionBlock:(id)arg2 ;
-(void)handleMultiplyRegistered:(id)arg0 ;
-(void)invalidate;
-(void)postNoReceiversNotice;
-(void)removeReceiver:(id)arg0 ;
-(void)weakHashBecameEmpty:(id)arg0 ;


@end


#endif