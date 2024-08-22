// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSIGNEDCLINICALDATAQRREPRESENTATION_H
#define HKSIGNEDCLINICALDATAQRREPRESENTATION_H

@class NSArray, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSignedClinicalDataQRRepresentation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *alreadyScannedSegments; // ivar: _alreadyScannedSegments
@property (readonly, copy, nonatomic) NSNumber *expectedNumberOfSegments;
@property (readonly, nonatomic) BOOL hasAllExpectedSegments;
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType


+(BOOL)supportsSecureCoding;
+(id)representationForEUDCCPayloadData:(id)arg0 error:(*id)arg1 ;
+(id)representationForJWSPayload:(id)arg0 error:(*id)arg1 ;
+(id)representationForJWSPayloadData:(id)arg0 error:(*id)arg1 ;
+(id)representationForRawContent:(id)arg0 sourceType:(NSInteger)arg1 error:(*id)arg2 ;
+(id)representationWithQRSegment:(id)arg0 ;
+(id)representationWithSMARTHealthCardQRSegmentData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceType:(NSInteger)arg0 ;
-(id)orderedSegmentsWithError:(*id)arg0 ;
-(id)representationByAddingQRSegment:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif