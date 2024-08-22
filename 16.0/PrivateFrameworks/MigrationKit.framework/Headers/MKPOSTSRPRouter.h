// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPOSTSRPROUTER_H
#define MKPOSTSRPROUTER_H

@class NSString;
@protocol MKHTTPRouter, MKPOSTSRPRouterDelegate;

#import <Foundation/Foundation.h>

#import "MKSRPServer.h"

@interface MKPOSTSRPRouter : NSObject <MKHTTPRouter>

 {
    MKSRPServer *_srp;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPOSTSRPRouterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSRP:(id)arg0 ;
-(void)server:(id)arg0 didReceiveRequest:(id)arg1 response:(id)arg2 ;


@end


#endif