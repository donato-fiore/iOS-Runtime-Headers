// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSTATUSPUBLISHERDELEGATE_H
#define RMSTATUSPUBLISHERDELEGATE_H

@class NSConditionLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RMStatusPublisherDelegate : NSObject {
    NSConditionLock *_fetchLock;
}


@property (readonly, nonatomic) Class publisherClass; // ivar: _publisherClass
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *publisherQueue; // ivar: _publisherQueue


-(id)initWithPublisherClass:(Class)arg0 ;
-(void)fetchStatusForStatusKeys:(id)arg0 store:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif