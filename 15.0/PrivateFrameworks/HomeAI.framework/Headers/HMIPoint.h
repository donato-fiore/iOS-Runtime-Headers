// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPOINT_H
#define HMIPOINT_H

@class HMFObject;
@protocol NSSecureCoding;



@interface HMIPoint : HMFObject <NSSecureCoding>



@property (readonly) CGPoint point; // ivar: _point
@property (readonly) CGFloat x;
@property (readonly) CGFloat y;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPoint:(struct CGPoint )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif