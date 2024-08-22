// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCLUSTERPOINT_H
#define _PSCLUSTERPOINT_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSClusterPoint : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) BOOL timestampExists; // ivar: _timestampExists
@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y


+(BOOL)supportsSecureCoding;
-(BOOL)inConvexHull:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)distanceToHull:(id)arg0 ;
-(CGFloat)distanceToLineFormedByStart:(id)arg0 End:(id)arg1 ;
-(CGFloat)euclideanDistanceToPoint:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)initWithX:(CGFloat)arg0 Y:(CGFloat)arg1 ;
-(int)findSideOfLineFormedByStart:(id)arg0 End:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif