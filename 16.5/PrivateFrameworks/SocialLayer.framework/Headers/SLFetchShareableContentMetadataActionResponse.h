// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLFETCHSHAREABLECONTENTMETADATAACTIONRESPONSE_H
#define SLFETCHSHAREABLECONTENTMETADATAACTIONRESPONSE_H



#import "SLShareableContentActionResponse.h"
#import "SLShareableContentInitiatorRequest.h"
#import "SLShareableContentMetadata.h"

@interface SLFetchShareableContentMetadataActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) SLShareableContentInitiatorRequest *initiatorRequest; // ivar: _initiatorRequest
@property (retain, nonatomic) SLShareableContentMetadata *metadata; // ivar: _metadata


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)responseWithMetadata:(id)arg0 initiatorRequest:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif