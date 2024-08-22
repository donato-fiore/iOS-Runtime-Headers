// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSSTATEPROVIDERSYSTEMSNAPSHOT_H
#define DNDSSTATEPROVIDERSYSTEMSNAPSHOT_H

@class NSArray, NSDictionary, NSDate;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DNDSStateProviderSystemSnapshot : NSObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSArray *activeAssertionUUIDs; // ivar: _activeAssertionUUIDs
@property (readonly, copy, nonatomic) NSDictionary *activeDateIntervalByAssertionUUID; // ivar: _activeDateIntervalByAssertionUUID
@property (readonly, copy, nonatomic) NSArray *assertions; // ivar: _assertions
@property (readonly, nonatomic) NSUInteger interruptionBehaviorSetting; // ivar: _interruptionBehaviorSetting
@property (readonly, copy, nonatomic) NSDate *lastUpdate; // ivar: _lastUpdate
@property (readonly, nonatomic) NSUInteger lostModeState; // ivar: _lostModeState


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithAssertions:(id)arg0 activeAssertionUUIDs:(id)arg1 activeDateIntervalByAssertionUUID:(id)arg2 interruptionBehaviorSetting:(NSUInteger)arg3 lostModeState:(NSUInteger)arg4 lastUpdate:(id)arg5 ;
-(id)_initWithSnapshot:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif