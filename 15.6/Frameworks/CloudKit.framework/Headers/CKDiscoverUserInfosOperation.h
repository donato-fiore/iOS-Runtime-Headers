// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDISCOVERUSERINFOSOPERATION_H
#define CKDISCOVERUSERINFOSOPERATION_H

@class NSArray;


#import "CKOperation.h"

@interface CKDiscoverUserInfosOperation : CKOperation

@property (copy, nonatomic) id *discoverUserInfosCompletionBlock; // ivar: _discoverUserInfosCompletionBlock
@property (copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (copy, nonatomic) NSArray *userRecordIDs; // ivar: _userRecordIDs


-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(id)initWithEmailAddresses:(id)arg0 userRecordIDs:(id)arg1 ;


@end


#endif