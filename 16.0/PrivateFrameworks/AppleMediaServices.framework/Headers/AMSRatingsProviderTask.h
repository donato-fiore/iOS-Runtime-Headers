// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSRATINGSPROVIDERTASK_H
#define AMSRATINGSPROVIDERTASK_H

@class NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"

@interface AMSRatingsProviderTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSString *storeFront; // ivar: _storeFront
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger useCase; // ivar: _useCase


+(id)createBagForSubProfile;
+(id)ratingWithValue:(id)arg0 mediaType:(NSUInteger)arg1 storeFront:(id)arg2 clientIdentifier:(id)arg3 bag:(id)arg4 ;
-(id)_appQueryItems;
-(id)_commonQueryItems;
-(id)_urlForMediaType:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initForAllMediaWithClientIdentifier:(id)arg0 useCase:(NSUInteger)arg1 bag:(id)arg2 ;
-(id)initForAllMediaWithStoreFront:(id)arg0 clientIdentifier:(id)arg1 useCase:(NSUInteger)arg2 bag:(id)arg3 ;
-(id)initWithMediaType:(NSUInteger)arg0 clientIdentifier:(id)arg1 bag:(id)arg2 ;
-(id)initWithMediaType:(NSUInteger)arg0 storeFront:(id)arg1 clientIdentifier:(id)arg2 bag:(id)arg3 ;
-(id)performTask;
-(id)resultWithCachedData:(id)arg0 ;


@end


#endif