// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPDAEMONQUERYTOKEN_H
#define SPDAEMONQUERYTOKEN_H

@class NSString;
@protocol NSCopying, SPDaemonQueryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPSearchQuery.h"

@interface SPDaemonQueryToken : NSObject <NSCopying>



@property (readonly, weak, nonatomic) NSObject<SPDaemonQueryDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didReissue; // ivar: _didReissue
@property (readonly) NSString *fbq; // ivar: _fbq
@property (readonly, nonatomic) BOOL gotQueryComplete; // ivar: _gotQueryComplete
@property (nonatomic) BOOL isLocalQuery; // ivar: _isLocalQuery
@property (readonly, nonatomic) SPSearchQuery *query; // ivar: _query
@property BOOL queryFinished; // ivar: _queryFinished
@property (readonly, nonatomic) unsigned int queryID; // ivar: _queryID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSString *web_fbq; // ivar: _web_fbq


-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithQuery:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(void)handleLocalQueryWithResultSet:(id)arg0 ;
-(void)handleMessage:(id)arg0 ;


@end


#endif