// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXCALLOBSERVER_H
#define CXCALLOBSERVER_H

@class NSArray, NSString;
@protocol CXCallObserverDataSourceDelegate, OS_dispatch_queue, CXCallObserverDataSource, CXCallObserverDelegate;

#import <Foundation/Foundation.h>


@interface CXCallObserver : NSObject <CXCallObserverDataSourceDelegate>



@property (readonly, copy, nonatomic) NSArray *calls;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // ivar: _concurrentQueue
@property (readonly, nonatomic) NSObject<CXCallObserverDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXCallObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDataSource:(id)arg0 concurrentQueue:(id)arg1 ;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)dataSource:(id)arg0 callChanged:(id)arg1 ;
-(void)dealloc;


@end


#endif