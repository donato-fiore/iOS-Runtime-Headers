// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLBATCHOPERATIONREQUESTCONTEXT_H
#define NSSQLBATCHOPERATIONREQUESTCONTEXT_H

@class NSString;


#import "NSSQLStoreRequestContext.h"

@interface NSSQLBatchOperationRequestContext : NSSQLStoreRequestContext {
    NSString *_tempTableName;
}




-(void)dealloc;


@end


#endif