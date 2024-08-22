// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOREQUESTQUEUE_H
#define SOREQUESTQUEUE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SORequestQueue : NSObject {
    NSString *_identifier;
    NSMutableArray *_queue;
    id *_processingItem;
}


@property (copy, nonatomic) id *processItemBlock; // ivar: _processItemBlock


+(id)debugDescription;
+(id)requestQueueWithIdentifier:(id)arg0 ;
+(void)removeQueueWithIdentifier:(id)arg0 ;
-(NSUInteger)queueCount;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_itemCompleted;
-(void)_processItem:(id)arg0 ;
-(void)enqueueRequest:(id)arg0 ;
-(void)processNextRequest;
-(void)removeAllRequestsWithBlock:(id)arg0 ;


@end


#endif