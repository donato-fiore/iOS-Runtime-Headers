// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKADAMIDTOCANONICALIDREQUESTOPERATION_H
#define WLKADAMIDTOCANONICALIDREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKAdamIDToCanonicalIDResponse.h"

@interface WLKAdamIDToCanonicalIDRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) NSString *adamId; // ivar: _adamId
@property (retain, nonatomic) WLKAdamIDToCanonicalIDResponse *response; // ivar: _response


-(id)initWithAdamId:(id)arg0 ;
-(void)processResponse;


@end


#endif