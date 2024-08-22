// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXCLIENTKEEPALIVESERVICE_H
#define SVXCLIENTKEEPALIVESERVICE_H

@class NSString;
@protocol SVXClientServiceConsuming, SVXClientKeepAliveServicing, SVXPerforming, SVXClientServiceProviding;

#import <Foundation/Foundation.h>


@interface SVXClientKeepAliveService : NSObject <SVXClientServiceConsuming, SVXClientKeepAliveServicing>

 {
    id<SVXPerforming> *_performer;
    id<SVXClientServiceProviding> *_clientServiceProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClientServiceProvider:(id)arg0 analytics:(id)arg1 performer:(id)arg2 ;
-(void)_connectWithRetryCount:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)clientServiceDidChange:(BOOL)arg0 ;
-(void)connectWithCompletion:(id)arg0 ;


@end


#endif