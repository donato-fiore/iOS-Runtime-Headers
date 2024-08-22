// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSIMPORTDOWNLOADTOIPODLIBRARYREQUEST_H
#define SSIMPORTDOWNLOADTOIPODLIBRARYREQUEST_H



#import "SSRequest.h"
#import "SSDownloadMetadata.h"
#import "SSPurchaseResponse.h"

@interface SSImportDownloadToIPodLibraryRequest : SSRequest

@property (readonly, nonatomic) SSDownloadMetadata *downloadMetadata; // ivar: _downloadMetadata
@property (readonly, nonatomic) SSPurchaseResponse *purchaseResponse; // ivar: _purchaseResponse


-(id)copyXPCEncoding;
-(id)initWithDownloadMetadata:(id)arg0 ;
-(id)initWithPurchase:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithResponseBlock:(id)arg0 ;


@end


#endif