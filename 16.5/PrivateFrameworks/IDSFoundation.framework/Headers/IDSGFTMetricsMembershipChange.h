// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSGFTMETRICSMEMBERSHIPCHANGE_H
#define IDSGFTMETRICSMEMBERSHIPCHANGE_H



#import "IDSGFTMetricsReferencePoint.h"

@interface IDSGFTMetricsMembershipChange : IDSGFTMetricsReferencePoint {
    CGFloat _referenceTime;
}




-(CGFloat)referenceTime;
-(id)initWithFromType:(id)arg0 fromUniqueID:(id)arg1 anonymizer:(id)arg2 template:(id)arg3 ;
-(void)receivedKMOverPushFromToken:(id)arg0 ;
-(void)receivedKMOverPushViaCacheForToken:(id)arg0 ;
-(void)receivedKMOverPushViaCacheForToken:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)receivedKMOverQRFromToken:(id)arg0 ;
-(void)receivedKMOverQUICFromToken:(id)arg0 ;
-(void)receivedUnverifiedKMOverQUICFromToken:(id)arg0 ;


@end


#endif