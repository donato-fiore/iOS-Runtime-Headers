// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPREQUEST_H
#define MPREQUEST_H

@class NSOperationQueue, NSError, NSString, NSArray;
@protocol NSCopying, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPRequest : NSObject <NSCopying, NSObject>



@property (readonly, nonatomic) NSOperationQueue *calloutQueue; // ivar: _calloutQueue
@property (readonly, nonatomic) NSError *cancelationError; // ivar: _cancelationError
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cleanupQueue; // ivar: _cleanupQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSArray *middlewareClasses; // ivar: _middlewareClasses
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


+(CGFloat)expectedMaximumResponseTimeInterval;
+(Class)responseClass;
-(id)_stateDumpObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)performWithCompletion:(id)arg0 ;
-(void)_performWithCompletion:(id)arg0 ;
-(void)cancel;
-(void)prepareForResponseWithCompletion:(id)arg0 ;


@end


#endif