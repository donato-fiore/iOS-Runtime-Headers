// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYDATABASEACCESSBROKER_H
#define WBSHISTORYDATABASEACCESSBROKER_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSHistoryDatabaseAccessBroker : NSObject {
    NSURL *_historyDatabaseURL;
    NSObject<OS_dispatch_queue> *_writeRequestQueue;
}




-(id)_openDatabaseWithAccessType:(NSInteger)arg0 onQueue:(id)arg1 error:(*id)arg2 ;
-(id)databaseLastModifiedDate;
-(id)init;
-(id)initWithHistoryDatabaseURL:(id)arg0 ;
-(void)_requestAccessType:(NSInteger)arg0 onQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_requestReadOnlyAccessOnQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)_requestReadWriteAccessOnQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestAccessType:(NSInteger)arg0 onQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAccessType:(NSInteger)arg0 onQueue:(id)arg1 completionHandlerWithInvalidationHandler:(id)arg2 ;


@end


#endif