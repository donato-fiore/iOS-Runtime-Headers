// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDOPERATIONINFOHOLDEROPERATION_H
#define CKDOPERATIONINFOHOLDEROPERATION_H



#import "CKDOperation.h"

@interface CKDOperationInfoHolderOperation : CKDOperation

@property (nonatomic) int operationType; // ivar: _operationType


-(BOOL)shouldKeepXPCConnectionAlive;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 operationType:(int)arg2 ;
-(void)main;


@end


#endif