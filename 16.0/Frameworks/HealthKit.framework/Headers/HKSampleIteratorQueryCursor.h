// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSAMPLEITERATORQUERYCURSOR_H
#define HKSAMPLEITERATORQUERYCURSOR_H

@class NSArray, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKQueryAnchor.h"

@interface HKSampleIteratorQueryCursor : NSObject <NSCopying, NSSecureCoding>

 {
    NSArray *_queryDescriptors;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_followingAnchor;
    HKQueryAnchor *_upToAndIncludingAnchor;
    NSArray *_distinctByKeyPaths;
    NSData *_state;
}


@property (readonly, copy, nonatomic) NSArray *distinctByKeyPaths;
@property (readonly, copy, nonatomic) HKQueryAnchor *followingAnchor;
@property (readonly, copy, nonatomic) NSArray *queryDescriptors;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (readonly, copy, nonatomic) NSData *state;
@property (readonly, copy, nonatomic) HKQueryAnchor *upToAndIncludingAnchor;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQueryDescriptors:(id)arg0 sortDescriptors:(id)arg1 followingAnchor:(id)arg2 upToAndIncludingAnchor:(id)arg3 distinctByKeyPaths:(id)arg4 ;
-(id)initWithQueryDescriptors:(id)arg0 sortDescriptors:(id)arg1 followingAnchor:(id)arg2 upToAndIncludingAnchor:(id)arg3 distinctByKeyPaths:(id)arg4 state:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif