// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDREMOVEANONYMOUSSHAREFROMSHAREDDBOPERATION_H
#define CKDREMOVEANONYMOUSSHAREFROMSHAREDDBOPERATION_H

@class NSDictionary;


#import "CKDDatabaseOperation.h"

@interface CKDRemoveAnonymousShareFromSharedDBOperation : CKDDatabaseOperation

@property (copy, nonatomic) id *anonymousShareRemovedBlock; // ivar: _anonymousShareRemovedBlock
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove; // ivar: _encryptedAnonymousSharesToRemove
@property (nonatomic) NSUInteger state;


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_removeAnonymousShareFromSharedDB;
-(void)main;


@end


#endif