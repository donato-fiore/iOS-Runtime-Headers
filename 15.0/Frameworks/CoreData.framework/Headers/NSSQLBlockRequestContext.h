// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLBLOCKREQUESTCONTEXT_H
#define NSSQLBLOCKREQUESTCONTEXT_H



#import "NSSQLStoreRequestContext.h"

@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext {
    id *_workBlock;
}




-(BOOL)executeRequestCore:(*id)arg0 ;
-(BOOL)isWritingRequest;
// -(id)initWithBlock:(id)arg0 context:(unk)arg1 sqlCore:(id)arg2  ;
-(void)dealloc;


@end


#endif