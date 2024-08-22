// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIOBJECTDETECTION_H
#define HMIOBJECTDETECTION_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMIObjectDetection : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly) int labelIndex; // ivar: _labelIndex
@property (readonly) NSNumber *roll; // ivar: _roll
@property (readonly) NSNumber *yaw; // ivar: _yaw


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabelIndex:(int)arg0 confidence:(CGFloat)arg1 boundingBox:(struct CGRect )arg2 yaw:(id)arg3 roll:(id)arg4 ;
-(id)initWithLabelIndex:(int)arg0 confidence:(CGFloat)arg1 unclampedBoundingBox:(struct CGRect )arg2 yaw:(id)arg3 roll:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif