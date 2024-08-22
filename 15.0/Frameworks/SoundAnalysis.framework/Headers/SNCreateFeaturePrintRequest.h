// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNCREATEFEATUREPRINTREQUEST_H
#define SNCREATEFEATUREPRINTREQUEST_H

@class NSString;
@protocol SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest;

#import <Foundation/Foundation.h>

#import "SNTimeDurationConstraint.h"

@interface SNCreateFeaturePrintRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger featurePrintType; // ivar: _featurePrintType
@property (readonly) NSUInteger hash;
@property (nonatomic) float overlapFactor; // ivar: _overlapFactor
@property (readonly) Class superclass;
@property (nonatomic) ? windowDuration; // ivar: _windowDuration
@property (readonly, nonatomic) SNTimeDurationConstraint *windowDurationConstraint; // ivar: _windowDurationConstraint


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCreateFeaturePrintRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeaturePrintType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif