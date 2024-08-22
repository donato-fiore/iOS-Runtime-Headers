// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDASSETTOKENREQUESTOPERATION_H
#define CKDASSETTOKENREQUESTOPERATION_H



#import "CKDDatabaseOperation.h"
#import "CKDAssetTokenRequest.h"

@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest; // ivar: _assetTokenRequest


-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)main;


@end


#endif