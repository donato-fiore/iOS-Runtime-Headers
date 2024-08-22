// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPACKAGEDOWNLOADTASK_H
#define CKPACKAGEDOWNLOADTASK_H

@class NSError, CKAsset, CKPackage, NSArray, NSIndexSet;
@protocol CKDCancelling, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CKDMMCSRequestOptions.h"
#import "CKDCancelTokenGroup.h"
#import "CKDProgressTracker.h"

@interface CKPackageDownloadTask : NSObject <CKDCancelling>



@property (retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions; // ivar: _MMCSRequestOptions
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // ivar: _cancelTokens
@property (retain) NSError *error; // ivar: _error
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (retain, nonatomic) id *itemIndices; // ivar: _itemIndices
@property (retain, nonatomic) CKAsset *manifestAsset; // ivar: _manifestAsset
@property (readonly, nonatomic) CKPackage *package; // ivar: _package
@property (retain, nonatomic) CKDProgressTracker *progressTracker; // ivar: _progressTracker
@property (retain, nonatomic) NSArray *sectionAssets; // ivar: _sectionAssets
@property (retain, nonatomic) NSIndexSet *sectionIndices; // ivar: _sectionIndices


-(id)initWithPackage:(id)arg0 trackProgress:(BOOL)arg1 ;
-(void)cancel;


@end


#endif