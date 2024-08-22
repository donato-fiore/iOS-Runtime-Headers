// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADVIRECTANGLEDETECTIONREQUEST_H
#define MADVIRECTANGLEDETECTIONREQUEST_H



#import "MADRequest.h"

@interface MADVIRectangleDetectionRequest : MADRequest

@property (nonatomic) float maximumAspectRatio; // ivar: _maximumAspectRatio
@property (nonatomic) NSUInteger maximumObservations; // ivar: _maximumObservations
@property (nonatomic) float minimumAspectRatio; // ivar: _minimumAspectRatio
@property (nonatomic) float minimumConfidence; // ivar: _minimumConfidence
@property (nonatomic) float minimumSize; // ivar: _minimumSize
@property (nonatomic) float quadratureTolerance; // ivar: _quadratureTolerance


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif