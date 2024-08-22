// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSRATINGSSTOREFRONTTASK_H
#define AMSRATINGSSTOREFRONTTASK_H

@class NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"

@interface AMSRatingsStorefrontTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(id)_urlForMediaType:(NSUInteger)arg0 ;
-(id)initWithMediaType:(NSUInteger)arg0 clientIdentifier:(id)arg1 bag:(id)arg2 ;
-(id)performTask;


@end


#endif