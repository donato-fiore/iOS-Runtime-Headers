// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOTASOFTWAREUPDATEPROVIDER_H
#define CHIPOTASOFTWAREUPDATEPROVIDER_H



#import "CHIPCluster.h"

@interface CHIPOtaSoftwareUpdateProvider : CHIPCluster {
    OtaSoftwareUpdateProviderCluster _cppCluster;
}


@property ? cppCluster;


+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)applyUpdateRequestWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)notifyUpdateAppliedWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryImageWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;


@end


#endif