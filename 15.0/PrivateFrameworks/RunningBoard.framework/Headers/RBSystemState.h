// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSYSTEMSTATE_H
#define RBSYSTEMSTATE_H

@class NSSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface RBSystemState : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) BOOL preventIdleSleep; // ivar: _preventIdleSleep
@property (readonly, nonatomic) NSSet *preventIdleSleepIdentifiers; // ivar: _preventIdleSleepIdentifiers
@property (readonly, nonatomic) BOOL preventLaunch; // ivar: _preventLaunch
@property (readonly, copy, nonatomic) NSSet *preventLaunchPredicates; // ivar: _preventLaunchPredicates
@property (readonly, copy, nonatomic) NSSet *tags; // ivar: _tags


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif