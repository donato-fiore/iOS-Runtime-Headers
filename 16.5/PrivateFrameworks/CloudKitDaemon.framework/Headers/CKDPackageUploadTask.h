// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPACKAGEUPLOADTASK_H
#define CKDPACKAGEUPLOADTASK_H

@class NSArray, NSError, CKPackage, NSString;
@protocol CKDCancelling, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CKDMMCSItem.h"
#import "CKDMMCSRequestOptions.h"
#import "CKDCancelTokenGroup.h"
#import "CKDProgressTracker.h"

@interface CKDPackageUploadTask : NSObject <CKDCancelling>



@property (retain, nonatomic) CKDMMCSItem *MMCSManifestItem; // ivar: _MMCSManifestItem
@property (retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions; // ivar: _MMCSRequestOptions
@property (retain, nonatomic) NSArray *MMCSSectionItems; // ivar: _MMCSSectionItems
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // ivar: _cancelTokens
@property (retain) NSError *error; // ivar: _error
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (readonly, nonatomic) CKPackage *package; // ivar: _package
@property (retain, nonatomic) CKDProgressTracker *progressTracker; // ivar: _progressTracker
@property (readonly, nonatomic) NSString *recordKey;
@property (readonly, nonatomic) NSInteger storageGroupingPolicy;
@property (readonly, nonatomic) NSInteger uploadRank;


-(id)activityCreate;
-(id)initWithPackage:(id)arg0 trackProgress:(BOOL)arg1 ;
-(void)cancel;


@end


#endif