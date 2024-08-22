// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMOVEPHOTOSOPERATION_H
#define CKMOVEPHOTOSOPERATION_H

@class NSArray, NSDictionary, NSMutableDictionary;
@protocol CKMovePhotosOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKMovePhotosOperationInfo.h"
#import "CKDatabase.h"

@interface CKMovePhotosOperation : CKDatabaseOperation <CKMovePhotosOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKMovePhotosOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSArray *moveChanges; // ivar: _moveChanges
@property (retain, nonatomic) NSDictionary *moveChangesByDestinationRecordID; // ivar: _moveChangesByDestinationRecordID
@property (retain, nonatomic) NSDictionary *moveChangesBySourceRecordID; // ivar: _moveChangesBySourceRecordID
@property (copy, nonatomic) id *movePhotosCompletionBlock; // ivar: _movePhotosCompletionBlock
@property (readonly, nonatomic) CKMovePhotosOperationInfo *operationInfo;
@property (copy, nonatomic) id *perRecordMoveBlock; // ivar: _perRecordMoveBlock
@property (copy, nonatomic) id *perRecordProgressBlock; // ivar: _perRecordProgressBlock
@property (retain, nonatomic) NSMutableDictionary *recordErrorsBySourceRecordID; // ivar: _recordErrorsBySourceRecordID
@property (retain, nonatomic) CKDatabase *sourceDatabase; // ivar: _sourceDatabase


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithMoveChanges:(id)arg0 sourceDatabase:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_trackAssetsToUpload;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleDeleteForRecordID:(id)arg0 error:(id)arg1 ;
-(void)handleMoveForSourceRecordID:(id)arg0 destinationMetadata:(id)arg1 moveMarkerMetadata:(id)arg2 error:(id)arg3 ;
-(void)handleRecordIDsInFlight:(id)arg0 reply:(id)arg1 ;
-(void)handleRecordModificationForRecordID:(id)arg0 didProgress:(CGFloat)arg1 ;
-(void)handleRecordUploadForRecordID:(id)arg0 recordKey:(id)arg1 arrayIndex:(NSInteger)arg2 signature:(id)arg3 size:(NSUInteger)arg4 paddedFileSize:(NSUInteger)arg5 uploaded:(BOOL)arg6 uploadReceipt:(id)arg7 uploadReceiptExpiration:(CGFloat)arg8 wrappedAssetKey:(id)arg9 clearAssetKey:(id)arg10 referenceSignature:(id)arg11 ;
-(void)handleSaveForRecordID:(id)arg0 recordMetadata:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif