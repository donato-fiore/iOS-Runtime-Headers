// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSQUERYTASK_H
#define PRSQUERYTASK_H

@class NSDictionary, NSString, PRSSearchFeedback, NSArray;
@protocol NSSecureCoding, PRSSearchQueryHandler, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPSearchQueryContext.h"
#import "PRSSearchSession.h"

@interface PRSQueryTask : NSObject <NSSecureCoding>



@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (retain, nonatomic) NSDictionary *category_stats; // ivar: _category_stats
@property (retain, nonatomic) NSString *fbq; // ivar: _fbq
@property (retain) PRSSearchFeedback *feedback; // ivar: _feedback
@property (retain, nonatomic) NSObject<PRSSearchQueryHandler> *handler; // ivar: _handler
@property (retain, nonatomic) NSArray *parsecCategoryOrder; // ivar: _parsecCategoryOrder
@property (readonly, nonatomic) SPSearchQueryContext *queryContext; // ivar: _queryContext
@property NSInteger queryId; // ivar: _queryId
@property NSUInteger queryIdent; // ivar: _queryIdent
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) id *representedObject; // ivar: _representedObject
@property (retain, nonatomic) NSDictionary *server_features; // ivar: _server_features
@property (weak, nonatomic) PRSSearchSession *session; // ivar: _session
@property (nonatomic) BOOL started; // ivar: _started
@property BOOL webSearch; // ivar: _webSearch


+(BOOL)supportsSecureCoding;
+(void)initialize;
+(void)resumeDecoding;
+(void)suspendDecoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSession:(id)arg0 handler:(id)arg1 queue:(id)arg2 feedback:(id)arg3 queryContext:(id)arg4 ;
-(void)cancel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateHandler;
-(void)resume;
-(void)setParsecState:(BOOL)arg0 ;


@end


#endif