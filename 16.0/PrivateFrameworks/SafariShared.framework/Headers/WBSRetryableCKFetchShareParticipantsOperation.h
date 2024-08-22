// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRETRYABLECKFETCHSHAREPARTICIPANTSOPERATION_H
#define WBSRETRYABLECKFETCHSHAREPARTICIPANTSOPERATION_H

@class NSArray;


#import "WBSRetryableCKOperation.h"

@interface WBSRetryableCKFetchShareParticipantsOperation : WBSRetryableCKOperation

@property (copy, nonatomic) id *fetchShareParticipantsCompletionBlock; // ivar: _fetchShareParticipantsCompletionBlock
@property (copy, nonatomic) id *perShareParticipantCompletionBlock; // ivar: _perShareParticipantCompletionBlock
@property (copy, nonatomic) NSArray *userIdentityLookupInfos; // ivar: _userIdentityLookupInfos


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif