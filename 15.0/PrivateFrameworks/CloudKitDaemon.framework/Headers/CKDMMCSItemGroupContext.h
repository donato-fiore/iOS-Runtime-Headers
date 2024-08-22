// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDMMCSITEMGROUPCONTEXT_H
#define CKDMMCSITEMGROUPCONTEXT_H

@class NSMapTable, NSNumber;
@protocol CKDCancelling, CKDMMCSItemReaderWriterDelegateProtocol;

#import <Foundation/Foundation.h>

#import "CKDMMCS.h"
#import "CKDMMCSItem.h"
#import "CKDMMCSItemGroup.h"
#import "CKDOperation.h"

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling, CKDMMCSItemReaderWriterDelegateProtocol>



@property (retain, nonatomic) CKDMMCS *MMCS; // ivar: _MMCS
@property (retain, nonatomic) NSMapTable *MMCSItemsByItemID; // ivar: _MMCSItemsByItemID
@property (retain, nonatomic) CKDMMCSItem *MMCSPackageSectionItem; // ivar: _MMCSPackageSectionItem
@property (copy, nonatomic) id *commandBlock; // ivar: _commandBlock
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSNumber *hasConformingOperation; // ivar: _hasConformingOperation
@property (retain, nonatomic) CKDMMCSItemGroup *itemGroup; // ivar: _itemGroup
@property (nonatomic) NSInteger mmcsOperationType; // ivar: _mmcsOperationType
@property (weak, nonatomic) CKDOperation *operation; // ivar: _operation
@property (retain, nonatomic) id *operationInfo; // ivar: _operationInfo
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (copy, nonatomic) id *startBlock; // ivar: _startBlock


-(BOOL)_setupGetMMCSItemsWithError:(*id)arg0 ;
-(BOOL)_setupMMCSItemsWithError:(*id)arg0 ;
-(BOOL)_setupPutContentMetadataMMCSItemsWithError:(*id)arg0 ;
-(BOOL)_setupPutMMCSItemsWithError:(*id)arg0 ;
-(BOOL)_setupRegisterMMCSItemsWithError:(*id)arg0 ;
-(BOOL)didReadFromItemReaderWriter:(id)arg0 offset:(NSUInteger)arg1 bytes:(char *)arg2 length:(NSUInteger)arg3 bytesRead:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)shouldFetchAssetContentInMemory;
-(BOOL)willCloseItemReaderWriter:(id)arg0 error:(*id)arg1 ;
-(BOOL)willGetFileMetadataItemReaderWriter:(id)arg0 error:(*id)arg1 ;
-(BOOL)willOpenItemReaderWriter:(id)arg0 error:(*id)arg1 ;
-(BOOL)willReadFromItemReaderWriter:(id)arg0 offset:(NSUInteger)arg1 bytes:(char *)arg2 length:(NSUInteger)arg3 bytesRead:(*NSUInteger)arg4 error:(*id)arg5 ;
-(id)conformingOperation;
-(id)didGetFileMetadataItemReaderWriter:(id)arg0 fileMetadata:(id)arg1 error:(id)arg2 ;
-(id)findTrackedMMCSItemByItemID:(NSUInteger)arg0 ;
-(id)getCKDMMCSItemReaderByPathForMMCSItem:(id)arg0 error:(*id)arg1 ;
// -(id)initWithMMCS:(id)arg0 itemGroup:(id)arg1 operation:(id)arg2 progress:(id)arg3 command:(unk)arg4 start:(id)arg5 groupCompletion:(unk)arg6  ;
-(struct MMCSItemReaderWriter *)getMMCSItemReaderForItemID:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)_startTrackingMMCSItems:(id)arg0 ;
-(void)_stopTrackingMMCSItems:(id)arg0 ;
-(void)cancel;
-(void)didCloseItemReaderWriter:(id)arg0 result:(BOOL)arg1 error:(id)arg2 ;
-(void)didCompleteRequestWithError:(id)arg0 ;
-(void)didGetItemID:(NSUInteger)arg0 signature:(id)arg1 path:(id)arg2 error:(id)arg3 results:(id)arg4 ;
-(void)didGetMetricsForRequest:(id)arg0 ;
-(void)didOpenItemReaderWriter:(id)arg0 result:(BOOL)arg1 error:(id)arg2 ;
-(void)didPutItemID:(NSUInteger)arg0 signature:(id)arg1 results:(id)arg2 ;
-(void)didPutSectionWithSignature:(id)arg0 results:(id)arg1 ;
-(void)handleCommand:(id)arg0 forItem:(id)arg1 ;
-(void)start;
-(void)updateProgressForItemID:(NSUInteger)arg0 state:(int)arg1 progress:(CGFloat)arg2 error:(id)arg3 ;
-(void)updateProgressForItemID:(NSUInteger)arg0 state:(int)arg1 progress:(CGFloat)arg2 results:(id)arg3 ;
-(void)updateProgressForPackageSectionState:(int)arg0 progress:(CGFloat)arg1 results:(id)arg2 ;


@end


#endif