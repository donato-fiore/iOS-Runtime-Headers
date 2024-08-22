// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDRECORDDOWNLOADTASK_H
#define CKDRECORDDOWNLOADTASK_H

@class NSMutableArray, NSError, CKRecord;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CKDProgressTracker.h"

@interface CKDRecordDownloadTask : NSObject

@property (retain, nonatomic) NSMutableArray *assetURLInfosToFillOut; // ivar: _assetURLInfosToFillOut
@property (retain, nonatomic) NSMutableArray *assetsToDownload; // ivar: _assetsToDownload
@property (retain, nonatomic) NSMutableArray *assetsToDownloadInMemory; // ivar: _assetsToDownloadInMemory
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (retain, nonatomic) NSMutableArray *packageIndexSets; // ivar: _packageIndexSets
@property (retain, nonatomic) CKDProgressTracker *progressTracker; // ivar: _progressTracker
@property (retain, nonatomic) CKRecord *record; // ivar: _record


-(id)initWithRecord:(id)arg0 trackProgress:(BOOL)arg1 assetsToDownload:(id)arg2 assetsToDownloadInMemory:(id)arg3 packageIndexSets:(id)arg4 assetURLInfosToFillOut:(id)arg5 ;
-(void)didCompleteTaskWithError:(id)arg0 ;
-(void)didDownloadAsset:(id)arg0 error:(id)arg1 ;
-(void)didFillOutURLInfo:(id)arg0 error:(id)arg1 ;


@end


#endif