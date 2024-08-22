// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATSERVICEPROXY_H
#define ATSERVICEPROXY_H

@class NSXPCConnection, NSString;
@protocol ATServiceObserver;


#import "ATService.h"

@interface ATServiceProxy : ATService <ATServiceObserver>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)messageLinks;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)service:(id)arg0 willOpenMessageLink:(id)arg1 ;
-(void)service:(id)arg0 willOpenMessageLink:(id)arg1 completion:(id)arg2 ;


@end


#endif