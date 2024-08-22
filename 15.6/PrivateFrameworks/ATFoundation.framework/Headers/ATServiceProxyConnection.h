// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSERVICEPROXYCONNECTION_H
#define ATSERVICEPROXYCONNECTION_H

@class NSXPCConnection, NSString, ATService;
@protocol ATServiceProxyConnection, ATServiceObserver;

#import <Foundation/Foundation.h>


@interface ATServiceProxyConnection : NSObject <ATServiceProxyConnection, ATServiceObserver>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ATService *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 connection:(id)arg1 ;
-(void)connectWithCompletion:(id)arg0 ;
-(void)fetchMessageLinksWithCompletion:(id)arg0 ;
-(void)service:(id)arg0 willOpenMessageLink:(id)arg1 ;


@end


#endif