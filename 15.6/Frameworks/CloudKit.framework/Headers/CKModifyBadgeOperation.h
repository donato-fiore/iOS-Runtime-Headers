// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMODIFYBADGEOPERATION_H
#define CKMODIFYBADGEOPERATION_H



#import "CKOperation.h"
#import "CKModifyBadgeOperationInfo.h"

@interface CKModifyBadgeOperation : CKOperation

@property (nonatomic) NSUInteger badgeValue; // ivar: _badgeValue
@property (copy, nonatomic) id *modifyBadgeCompletionBlock; // ivar: _modifyBadgeCompletionBlock
@property (readonly, nonatomic) CKModifyBadgeOperationInfo *operationInfo;


-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithBadgeValue:(NSUInteger)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)performCKOperation;


@end


#endif