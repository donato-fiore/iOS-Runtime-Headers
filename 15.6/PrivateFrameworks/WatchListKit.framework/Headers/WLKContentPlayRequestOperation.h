// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKCONTENTPLAYREQUESTOPERATION_H
#define WLKCONTENTPLAYREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKContentPlayResponse.h"

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (retain, nonatomic) WLKContentPlayResponse *response; // ivar: _response


-(id)initWithCanonicalID:(id)arg0 caller:(id)arg1 ;
-(void)processResponse;


@end


#endif