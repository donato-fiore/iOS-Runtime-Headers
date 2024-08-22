// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKCANONICALPLAYABLESREQUESTOPERATION_H
#define WLKCANONICALPLAYABLESREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKCanonicalPlayablesResponse.h"

@interface WLKCanonicalPlayablesRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (readonly, nonatomic) WLKCanonicalPlayablesResponse *response; // ivar: _response


-(id)initWithContentID:(id)arg0 profiles:(id)arg1 caller:(id)arg2 ;
-(void)processResponse;


@end


#endif