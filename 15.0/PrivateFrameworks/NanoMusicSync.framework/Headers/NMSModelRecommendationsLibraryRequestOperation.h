// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSMODELRECOMMENDATIONSLIBRARYREQUESTOPERATION_H
#define NMSMODELRECOMMENDATIONSLIBRARYREQUESTOPERATION_H

@class MPAsyncOperation;


#import "NMSModelRecommendationsLibraryRequest.h"

@interface NMSModelRecommendationsLibraryRequestOperation : MPAsyncOperation

@property (copy, nonatomic) NMSModelRecommendationsLibraryRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)_modelObjectWithCachedArtworkFromModelObject:(id)arg0 ;
-(id)_mpIdentifierSetsFromStringIdentifiers:(id)arg0 ;
-(void)_requestContainerWithClass:(Class)arg0 ;
-(void)execute;


@end


#endif