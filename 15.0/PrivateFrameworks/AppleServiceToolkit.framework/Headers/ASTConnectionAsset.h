// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTCONNECTIONASSET_H
#define ASTCONNECTIONASSET_H

@class NSString, NSFileHandle, NSMutableURLRequest;
@protocol ASTDownloadConnection, ASTConnectionStatusDelegate;


#import "ASTMaterializedConnection.h"

@interface ASTConnectionAsset : ASTMaterializedConnection <ASTDownloadConnection>



@property (retain, nonatomic) NSString *assetName; // ivar: _assetName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileHandle *destinationFileHandle; // ivar: _destinationFileHandle
@property (copy, nonatomic) id *didDownloadFile; // ivar: _didDownloadFile
@property (copy, nonatomic) id *didReceiveResponse;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger networkDisconnectedRetryCount;
@property (readonly, nonatomic) NSMutableURLRequest *request;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (readonly, nonatomic) NSUInteger rootOfTrust;
@property (nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(id)accept;
-(id)endpoint;
-(id)initWithAssetName:(id)arg0 destinationFileHandle:(id)arg1 ;
-(id)method;


@end


#endif