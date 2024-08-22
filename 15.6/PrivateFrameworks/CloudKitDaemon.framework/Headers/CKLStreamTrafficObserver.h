// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKLSTREAMTRAFFICOBSERVER_H
#define CKLSTREAMTRAFFICOBSERVER_H

@class NSPredicate, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "CKLStreamObserver.h"

@interface CKLStreamTrafficObserver : CKLStreamObserver

@property (copy, nonatomic) NSPredicate *logMessageFilter; // ivar: _logMessageFilter
@property (retain) NSObject<OS_dispatch_queue> *printQueue; // ivar: _printQueue
@property (retain) NSMutableDictionary *requestDictionary; // ivar: _requestDictionary
@property (copy, nonatomic) id *requestParsedBlock; // ivar: _requestParsedBlock


-(id)initWithLogTypes:(NSUInteger)arg0 ;
-(id)parserFromConfigurationMessage:(id)arg0 ;
-(void)eventMatched:(id)arg0 ;
-(void)finish;
-(void)parseRequestArrayAndPrint:(id)arg0 ;


@end


#endif