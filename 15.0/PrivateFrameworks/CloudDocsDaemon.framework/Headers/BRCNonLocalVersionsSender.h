// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCNONLOCALVERSIONSSENDER_H
#define BRCNONLOCALVERSIONSSENDER_H

@class BRCOperation, NSString, CKRecordID, NSURL;
@protocol BRNonLocalVersionSending, BRCOperationSubclass, BRNonLocalVersionReceiving, GSAdditionStoring;


#import "BRCItemID.h"
#import "BRCStatInfo.h"
#import "BRCXPCClient.h"
#import "BRCServerZone.h"
#import "BRCAppLibrary.h"

@interface BRCNonLocalVersionsSender : BRCOperation <BRNonLocalVersionSending, BRCOperationSubclass>

 {
    id<BRNonLocalVersionReceiving> *_receiver;
    BRCItemID *_itemID;
    BRCStatInfo *_st;
    NSString *_currentEtag;
    NSString *_storagePathPrefix;
    NSObject<GSAdditionStoring> *_storage;
    BRCXPCClient *_client;
    BRCServerZone *_serverZone;
    BRCAppLibrary *_appLibrary;
    CKRecordID *_recordID;
    id *_reply;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeCachedVersions; // ivar: _includeCachedVersions
@property (readonly, nonatomic) NSURL *logicalURL; // ivar: _logicalURL
@property (readonly, nonatomic) NSURL *physicalURL; // ivar: _physicalURL
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)senderWithLookup:(id)arg0 client:(id)arg1 XPCReceiver:(id)arg2 error:(*id)arg3 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)_depsTrackingOperation;
-(id)_fetchThumbnailOperationForVersionRecord:(id)arg0 physicalURL:(id)arg1 ;
-(id)_fetchVersionsOperationWithDepsOp:(id)arg0 ;
-(id)createActivity;
-(id)initWithDocument:(id)arg0 serverItem:(id)arg1 relpath:(id)arg2 client:(id)arg3 XPCReceiver:(id)arg4 error:(*id)arg5 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)invalidate;
-(void)listNonLocalVersionsWithReply:(id)arg0 ;
-(void)main;


@end


#endif