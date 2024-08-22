// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNPERSONSMODELPREDICTION_H
#define VNPERSONSMODELPREDICTION_H

@protocol NSCopying, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VNFaceObservation.h"

@interface VNPersonsModelPrediction : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) VNFaceObservation *faceObservation; // ivar: _faceObservation
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying><NSSecureCoding> *predictedPersonUniqueIdentifier; // ivar: _predictedPersonUniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceObservation:(id)arg0 predictedPersonUniqueIdentifier:(id)arg1 confidence:(float)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif