// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLBATCHINSERTREQUESTCONTEXT_H
#define NSSQLBATCHINSERTREQUESTCONTEXT_H



#import "NSSQLStoreRequestContext.h"
#import "NSBatchInsertRequest.h"

@interface NSSQLBatchInsertRequestContext : NSSQLStoreRequestContext

@property (readonly, nonatomic) NSBatchInsertRequest *request;


-(BOOL)executeRequestCore:(*id)arg0 ;
-(BOOL)isWritingRequest;
-(id)initWithRequest:(id)arg0 context:(id)arg1 sqlCore:(id)arg2 ;


@end


#endif