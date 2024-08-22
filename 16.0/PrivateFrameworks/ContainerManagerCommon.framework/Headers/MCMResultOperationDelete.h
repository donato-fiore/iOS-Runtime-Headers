// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMRESULTOPERATIONDELETE_H
#define MCMRESULTOPERATIONDELETE_H

@protocol OS_xpc_object;


#import "MCMResultWithContainersArrayBase.h"

@interface MCMResultOperationDelete : MCMResultWithContainersArrayBase

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcToMerge; // ivar: _xpcToMerge


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(void)mergeWithXPCResult:(id)arg0 ;


@end


#endif