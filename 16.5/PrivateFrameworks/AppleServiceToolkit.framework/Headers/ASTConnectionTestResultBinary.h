// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTCONNECTIONTESTRESULTBINARY_H
#define ASTCONNECTIONTESTRESULTBINARY_H

@class NSString, NSURL, NSMutableURLRequest, NSNumber;
@protocol ASTUploadConnection, ASTTestResultHandling, ASTConnectionStatusDelegate;


#import "ASTMaterializedConnection.h"
#import "ASTSealableFile.h"

@interface ASTConnectionTestResultBinary : ASTMaterializedConnection <ASTUploadConnection, ASTTestResultHandling>



@property (retain, nonatomic) NSString *dataId; // ivar: _dataId
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didReceiveResponse;
@property (readonly, nonatomic) NSURL *fileSteamLocationURL; // ivar: _fileSteamLocationURL
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger networkDisconnectedRetryCount;
@property (readonly, nonatomic) NSMutableURLRequest *request;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (readonly, nonatomic) NSUInteger rootOfTrust;
@property (retain, nonatomic) ASTSealableFile *sealableFile; // ivar: _sealableFile
@property (nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *testId; // ivar: _testId


-(id)contentType;
-(id)endpoint;
-(id)initWithSealableFile:(id)arg0 fileSequence:(id)arg1 totalFiles:(id)arg2 testId:(id)arg3 dataId:(id)arg4 ;


@end


#endif