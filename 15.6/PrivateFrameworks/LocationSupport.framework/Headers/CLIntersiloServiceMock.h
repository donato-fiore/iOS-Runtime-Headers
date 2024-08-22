// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLINTERSILOSERVICEMOCK_H
#define CLINTERSILOSERVICEMOCK_H

@class NSString, NSMutableDictionary;
@protocol CLIntersiloServiceMockProtocol;


#import "CLIntersiloService.h"

@interface CLIntersiloServiceMock : CLIntersiloService <CLIntersiloServiceMockProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *keyedPayloads; // ivar: _keyedPayloads
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;


-(id)getPayloadForKey:(id)arg0 ;
-(id)getPayloadForSelector:(SEL)arg0 ;
-(id)syncgetPayloadForKey:(id)arg0 ;
-(id)syncgetPayloadForSelector:(SEL)arg0 ;
-(void)beginService;
-(void)endService;
-(void)removePayloadForKey:(id)arg0 ;
-(void)removePayloadForSelector:(SEL)arg0 ;
-(void)setPayload:(id)arg0 forKey:(id)arg1 ;
-(void)setPayload:(id)arg0 forSelector:(SEL)arg1 ;


@end


#endif