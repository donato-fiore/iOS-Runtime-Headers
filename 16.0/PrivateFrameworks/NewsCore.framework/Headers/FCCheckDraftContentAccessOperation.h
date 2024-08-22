// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCHECKDRAFTCONTENTACCESSOPERATION_H
#define FCCHECKDRAFTCONTENTACCESSOPERATION_H

@class NSSet, NSArray, NSDictionary;
@protocol FCContentContext;


#import "FCOperation.h"

@interface FCCheckDraftContentAccessOperation : FCOperation

@property (copy, nonatomic) NSSet *articleIDs; // ivar: _articleIDs
@property (copy, nonatomic) NSArray *channelMemberships; // ivar: _channelMemberships
@property (copy, nonatomic) id *checkAccessCompletion; // ivar: _checkAccessCompletion
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) NSSet *issueIDs; // ivar: _issueIDs
@property (copy, nonatomic) NSDictionary *resultAccessByContentID; // ivar: _resultAccessByContentID


-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif