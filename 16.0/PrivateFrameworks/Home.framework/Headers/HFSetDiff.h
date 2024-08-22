// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSETDIFF_H
#define HFSETDIFF_H

@class NSSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HFSetDiff : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSSet *additions; // ivar: _additions
@property (readonly, nonatomic) NSSet *deletions; // ivar: _deletions
@property (readonly, nonatomic) NSSet *fromSet; // ivar: _fromSet
@property (readonly, nonatomic) NSSet *toSet; // ivar: _toSet
@property (readonly, nonatomic) NSSet *updates; // ivar: _updates


+(id)diffFromSet:(id)arg0 toSet:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithFromSet:(id)arg0 toSet:(id)arg1 additions:(id)arg2 deletions:(id)arg3 updates:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diffByMergingDiff:(id)arg0 keyGenerator:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif