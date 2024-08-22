// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABREQUESTHANDLER_H
#define ABREQUESTHANDLER_H

@protocol AuthBrokerQuery;

#import <Foundation/Foundation.h>


@interface ABRequestHandler : NSObject <AuthBrokerQuery>

 {
    *void authenticator;
}




-(id)init;
-(void)fetchProxyCredential:(id)arg0 reply:(id)arg1 ;


@end


#endif