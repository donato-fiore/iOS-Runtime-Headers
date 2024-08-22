// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMAGICALMOMENTSPREDICTION_H
#define ATXMAGICALMOMENTSPREDICTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXMagicalMomentsPrediction : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSString *predictionIdentifier; // ivar: _predictionIdentifier


+(BOOL)supportsSecureCoding;
+(NSInteger)mmAnchorToPMMAnchor:(NSInteger)arg0 ;
+(NSInteger)mmReasonToPMMReason:(unsigned int)arg0 ;
+(id)convertPredictionsToPMMPredictionItems:(id)arg0 reason:(unsigned int)arg1 anchor:(NSInteger)arg2 triggerEvent:(id)arg3 ;
+(id)pmmMetadataForDuetEvent:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidence:(CGFloat)arg0 predictionIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif