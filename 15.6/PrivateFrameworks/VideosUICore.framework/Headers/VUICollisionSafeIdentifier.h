// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUICOLLISIONSAFEIDENTIFIER_H
#define VUICOLLISIONSAFEIDENTIFIER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUICollisionSafeIdentifier : NSObject <NSCopying>



@property (nonatomic) NSUInteger collisionCount; // ivar: _collisionCount
@property (copy, nonatomic) NSObject<NSCopying> *rootIdentifier; // ivar: _rootIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRootIdentifier:(id)arg0 collisionCount:(NSUInteger)arg1 ;


@end


#endif