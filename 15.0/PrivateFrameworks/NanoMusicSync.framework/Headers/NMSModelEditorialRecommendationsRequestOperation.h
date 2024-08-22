// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSMODELEDITORIALRECOMMENDATIONSREQUESTOPERATION_H
#define NMSMODELEDITORIALRECOMMENDATIONSREQUESTOPERATION_H

@class MPModelStoreBrowseRequestOperation;



@interface NMSModelEditorialRecommendationsRequestOperation : MPModelStoreBrowseRequestOperation



-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg0 error:(*id)arg1 ;
-(void)execute;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif