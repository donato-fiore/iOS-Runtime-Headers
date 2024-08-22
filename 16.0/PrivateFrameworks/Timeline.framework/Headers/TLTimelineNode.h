// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLTIMELINENODE_H
#define TLTIMELINENODE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TLTimelineNode.h"

@interface TLTimelineNode : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) TLTimelineNode *leftNode; // ivar: _leftNode
@property (retain, nonatomic) TLTimelineNode *rightNode; // ivar: _rightNode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToObject:(id)arg0 includingLeftNodes:(BOOL)arg1 includingRightNodes:(BOOL)arg2 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 copyLeftNodes:(BOOL)arg1 copyRightNodes:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif