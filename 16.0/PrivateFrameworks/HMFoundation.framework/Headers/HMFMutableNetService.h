// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFMUTABLENETSERVICE_H
#define HMFMUTABLENETSERVICE_H

@class NSDictionary;


#import "HMFNetService.h"

@interface HMFMutableNetService : HMFNetService

@property (copy) NSDictionary *TXTRecord;
@property NSUInteger port;
@property (copy, nonatomic) id *publishBlock; // ivar: _publishBlock


-(id)initWithDomain:(id)arg0 type:(id)arg1 name:(id)arg2 port:(NSUInteger)arg3 ;
-(id)initWithNetService:(id)arg0 ;
-(id)internal;
-(void)netService:(id)arg0 didNotPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg0 ;
-(void)netServiceDidStop:(id)arg0 ;
-(void)netServiceWillPublish:(id)arg0 ;
-(void)removeTXTRecordValueForKey:(id)arg0 ;
-(void)setInternal:(id)arg0 ;
-(void)startPublishingWithCompletionHandler:(id)arg0 ;
-(void)stopPublishing;
-(void)updateTXTRecordWithData:(id)arg0 ;


@end


#endif