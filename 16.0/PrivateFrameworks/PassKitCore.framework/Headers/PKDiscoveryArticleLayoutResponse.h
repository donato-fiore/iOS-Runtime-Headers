// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYARTICLELAYOUTRESPONSE_H
#define PKDISCOVERYARTICLELAYOUTRESPONSE_H



#import "PKDiscoveryWebServiceResponse.h"
#import "PKDiscoveryArticleLayout.h"

@interface PKDiscoveryArticleLayoutResponse : PKDiscoveryWebServiceResponse

@property (readonly, nonatomic) PKDiscoveryArticleLayout *discoveryArticleLayout; // ivar: _discoveryArticleLayout


-(id)initWithData:(id)arg0 ;


@end


#endif