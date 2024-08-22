// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNHORIZONOBSERVATION_H
#define VNHORIZONOBSERVATION_H



#import "VNObservation.h"

@interface VNHorizonObservation : VNObservation

@property (nonatomic) CGFloat angle; // ivar: _angle
@property (nonatomic) CGAffineTransform transform; // ivar: _transform


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)angleInTopLeftOrigin:(BOOL)arg0 orientation:(unsigned int)arg1 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)vn_cloneObject;
-(struct CGAffineTransform )transformForImageWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif