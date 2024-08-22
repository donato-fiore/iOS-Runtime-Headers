// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSRETRYABLECKFETCHSHAREMETADATAOPERATION_H
#define WBSRETRYABLECKFETCHSHAREMETADATAOPERATION_H

@class NSArray, NSDictionary;


#import "WBSRetryableCKOperation.h"

@interface WBSRetryableCKFetchShareMetadataOperation : WBSRetryableCKOperation

@property (copy, nonatomic) id *fetchShareMetadataCompletionBlock; // ivar: _fetchShareMetadataCompletionBlock
@property (copy, nonatomic) id *perShareMetadataBlock; // ivar: _perShareMetadataBlock
@property (copy, nonatomic) NSArray *rootRecordDesiredKeys; // ivar: _rootRecordDesiredKeys
@property (copy, nonatomic) NSDictionary *shareInvitationTokensByShareURL; // ivar: _shareInvitationTokensByShareURL
@property (copy, nonatomic) NSArray *shareURLs; // ivar: _shareURLs
@property (nonatomic) BOOL shouldFetchRootRecord; // ivar: _shouldFetchRootRecord


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif