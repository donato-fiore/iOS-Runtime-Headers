// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDSEARCHQUERY_H
#define MDSEARCHQUERY_H

@class NSString, NSDictionary, NSPredicate;
@protocol MDSearchQueryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSSearchQuery.h"

@interface MDSearchQuery : NSObject {
    NSUInteger _status;
}


@property (retain) NSString *clientBundleID; // ivar: _clientBundleID
@property (weak) NSObject<MDSearchQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSDictionary *options;
@property (copy) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) CSSearchQuery *query; // ivar: _query
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property NSUInteger status;


-(id)initWithPredicate:(id)arg0 options:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 options:(id)arg1 ;
-(void)_didFinishWithError:(id)arg0 ;
-(void)_didReturnItems:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif