// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUIBUCKETEPHEMERALSENDERLIST_H
#define MUIBUCKETEPHEMERALSENDERLIST_H

@class EFLocked, NSString, NSURL;
@protocol EFContentProtectionObserver, OS_dispatch_queue, EFScheduler;

#import <Foundation/Foundation.h>


@interface MUIBucketEphemeralSenderList : NSObject <EFContentProtectionObserver>



@property (readonly, nonatomic) EFLocked *addresses; // ivar: _addresses
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // ivar: _contentProtectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isWaitingOnUnlock; // ivar: _isWaitingOnUnlock
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSObject<EFScheduler> *writeScheduler; // ivar: _writeScheduler


-(BOOL)isAddressInList:(id)arg0 ;
-(id)_loadFromURL:(id)arg0 ;
-(id)_simpleAddressForString:(id)arg0 ;
-(id)_stringAddressesFromPopulationBlock:(id)arg0 ;
-(id)initWithDirectory:(id)arg0 populationBlock:(id)arg1 ;
-(void)_scheduleWrite;
-(void)addAddressesToList:(id)arg0 ;
-(void)addSenderToList:(id)arg0 ;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)removeAddressesFromList:(id)arg0 ;
-(void)removeSenderFromList:(id)arg0 ;


@end


#endif