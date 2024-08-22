// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTSECTIONPRESENCEPERSONALIZATIONRELATIVEREQUEST_H
#define NTSECTIONPRESENCEPERSONALIZATIONRELATIVEREQUEST_H

@class FCPersonalizationFeature;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTSectionPresencePersonalizationRelativeRequest : NSObject <NSCopying>



@property (copy, nonatomic) FCPersonalizationFeature *competingSectionFeature; // ivar: _competingSectionFeature
@property (nonatomic) CGFloat competingSectionFeatureClickPrior; // ivar: _competingSectionFeatureClickPrior
@property (nonatomic) CGFloat competingSectionFeatureImpressionPrior; // ivar: _competingSectionFeatureImpressionPrior
@property (nonatomic) CGFloat scalar; // ivar: _scalar
@property (copy, nonatomic) FCPersonalizationFeature *targetSectionFeature; // ivar: _targetSectionFeature
@property (nonatomic) CGFloat targetSectionFeatureClickPrior; // ivar: _targetSectionFeatureClickPrior
@property (nonatomic) CGFloat targetSectionFeatureImpressionPrior; // ivar: _targetSectionFeatureImpressionPrior


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif