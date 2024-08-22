// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLTIMELINESEGMENT_H
#define TLTIMELINESEGMENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TLTimelineEntryNode.h"

@interface TLTimelineSegment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) TLTimelineEntryNode *leftmostNode; // ivar: _leftmostNode
@property (readonly, nonatomic) TLTimelineEntryNode *rightmostNode; // ivar: _rightmostNode


+(BOOL)supportsSecureCoding;
-(BOOL)containsNode:(id)arg0 ;
-(BOOL)contractFromLeft;
-(BOOL)contractFromRight;
-(BOOL)expandToLeft;
-(BOOL)expandToRight;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shiftLeft;
-(BOOL)shiftRight;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLeftmostNode:(id)arg0 rightmostNode:(id)arg1 count:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif