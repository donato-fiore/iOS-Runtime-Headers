// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _COMESSAGINGSERVICEMETER_H
#define _COMESSAGINGSERVICEMETER_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _COMessagingServiceMeter : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSDictionary *limits; // ivar: _limits
@property (readonly, nonatomic) NSMutableDictionary *peaks; // ivar: _peaks
@property (readonly, nonatomic) int registration; // ivar: _registration


-(BOOL)clientIdentifier:(id)arg0 canReceiveLength:(NSUInteger)arg1 ;
-(BOOL)clientIdentifier:(id)arg0 canSendLength:(NSUInteger)arg1 ;
-(BOOL)isEvaluatingIdentifier:(id)arg0 ;
-(NSUInteger)receiveLimitForIdentifier:(id)arg0 ;
-(NSUInteger)sendLimitForIdentifier:(id)arg0 ;
-(id)init;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;


@end


#endif