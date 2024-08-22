// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNENTITYIDENTIFICATIONMODELPREDICTION_H
#define VNENTITYIDENTIFICATIONMODELPREDICTION_H

@class VNObservation<VNEntityIdentificationModelObservation>;
@protocol NSCopying, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNEntityIdentificationModelPrediction : NSObject <NSCopying, NSSecureCoding>



@property (readonly) float confidence; // ivar: _confidence
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *entityUniqueIdentifier; // ivar: _entityUniqueIdentifier
@property (readonly) VNObservation<VNEntityIdentificationModelObservation> *observation; // ivar: _observation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObservation:(id)arg0 entityUniqueIdentifier:(id)arg1 confidence:(float)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif