// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTRANSFERAGENTIDSINTERFACE_H
#define IMTRANSFERAGENTIDSINTERFACE_H

@class IDSService, NSMutableDictionary, NSString;
@protocol IDSServiceDelegate;

#import <Foundation/Foundation.h>


@interface IMTransferAgentIDSInterface : NSObject <IDSServiceDelegate>

 {
    IDSService *_idsService;
    NSMutableDictionary *_uniqueIDToTransferCompletionBlockMap;
    NSMutableDictionary *_uniqueIDToFilePathMap;
    int _numTransfers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_sendIDSMessage:(id)arg0 topic:(id)arg1 localPath:(id)arg2 ;
-(BOOL)isLocalDevicePresent;
-(id)init;
-(id)localCompanionDevice;
-(int)currentTransfers;
-(void)_handleUploadRequest:(id)arg0 ;
-(void)_handleUploadResponse:(id)arg0 ;
-(void)_sendUploadRequest:(id)arg0 topic:(id)arg1 transferID:(id)arg2 sourceAppID:(id)arg3 allowReauthorize:(BOOL)arg4 ;
-(void)_sendUploadResponse:(id)arg0 topic:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 requestURLString:(id)arg6 transferID:(id)arg7 ;
-(void)dealloc;
-(void)decrementTransferCount;
-(void)incrementTransferCount;
-(void)remoteUploadFileRequest:(id)arg0 topic:(id)arg1 transferID:(id)arg2 sourceAppID:(id)arg3 completionBlock:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif