// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSREQUESTCONTROLLER_H
#define TPSREQUESTCONTROLLER_H

@class NSMapTable, NSMutableOrderedSet, CoreTelephonyClient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSRequest.h"

@interface TPSRequestController : NSObject

@property (readonly, nonatomic) NSMapTable *delegateToQueue; // ivar: _delegateToQueue
@property (retain, nonatomic) TPSRequest *pendingRequest; // ivar: _pendingRequest
@property (retain, nonatomic) NSMutableOrderedSet *requests; // ivar: _requests
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // ivar: _serialDispatchQueue
@property (readonly, nonatomic) CoreTelephonyClient *telephonyClient; // ivar: _telephonyClient


-(id)init;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)addRequest:(id)arg0 ;
-(void)execute;
-(void)executeRequest:(id)arg0 ;
-(void)postResponse:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif