// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSCOREDPREDICTION_H
#define ATXSCOREDPREDICTION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) id *predictedItem; // ivar: _predictedItem
@property (readonly, nonatomic) float score; // ivar: _score


+(BOOL)supportsSecureCoding;
+(id)predictionsFrom:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScoredPredictionItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBundleId:(id)arg0 score:(float)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredictedItem:(id)arg0 score:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif