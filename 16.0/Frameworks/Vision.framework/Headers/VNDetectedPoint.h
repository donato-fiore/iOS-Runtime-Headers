// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTEDPOINT_H
#define VNDETECTEDPOINT_H



#import "VNPoint.h"

@interface VNDetectedPoint : VNPoint {
    float _confidence;
}


@property (readonly) float confidence;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(struct CGPoint )arg0 confidence:(float)arg1 ;
-(id)transformedWith:(struct CGAffineTransform )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif