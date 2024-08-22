// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDADDANONYMOUSSHARETOSHAREDDBOPERATION_H
#define CKDADDANONYMOUSSHARETOSHAREDDBOPERATION_H

@class NSDictionary;


#import "CKDDatabaseOperation.h"

@interface CKDAddAnonymousShareToSharedDBOperation : CKDDatabaseOperation

@property (copy, nonatomic) id *anonymousShareSavedBlock; // ivar: _anonymousShareSavedBlock
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd; // ivar: _encryptedAnonymousSharesToAdd
@property (nonatomic) NSUInteger state;


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_addAnonymousSharesToSharedDB;
-(void)main;


@end


#endif