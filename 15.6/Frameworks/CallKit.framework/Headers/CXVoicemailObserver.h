// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXVOICEMAILOBSERVER_H
#define CXVOICEMAILOBSERVER_H

@class NSString, NSArray;
@protocol CXVoicemailObserverDataSourceDelegate, CXVoicemailObserverDataSource, CXVoicemailObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXVoicemailObserver : NSObject <CXVoicemailObserverDataSourceDelegate>



@property (readonly, nonatomic) NSObject<CXVoicemailObserverDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXVoicemailObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *voicemails;


-(id)init;
-(id)initWithDataSource:(id)arg0 queue:(id)arg1 ;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)dataSourceVoicemailsChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif