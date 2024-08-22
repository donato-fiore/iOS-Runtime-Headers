// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKBASICCONTENTREQUESTOPERATION_H
#define WLKBASICCONTENTREQUESTOPERATION_H

@class NSArray;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKBasicContentMetadata.h"
#import "WLKBasicContentRequestResponse.h"

@interface WLKBasicContentRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKBasicContentMetadata *basicContentMetadata;
@property (readonly, copy, nonatomic) NSArray *contentIDs; // ivar: _contentIDs
@property (readonly, nonatomic) WLKBasicContentRequestResponse *response; // ivar: _response


-(id)initWithContentID:(id)arg0 caller:(id)arg1 ;
-(id)initWithContentIDs:(id)arg0 caller:(id)arg1 ;
-(void)processResponse;


@end


#endif