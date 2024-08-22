// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMODELEDITORIALRECOMMENDATIONSREQUEST_H
#define NMSMODELEDITORIALRECOMMENDATIONSREQUEST_H

@class MPModelStoreBrowseRequest;



@interface NMSModelEditorialRecommendationsRequest : MPModelStoreBrowseRequest

@property (retain, nonatomic) id *nms_cachedLoadedOutput; // ivar: _nms_cachedLoadedOutput
@property (nonatomic) BOOL nms_useCachedDataOnly; // ivar: _nms_useCachedDataOnly


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif