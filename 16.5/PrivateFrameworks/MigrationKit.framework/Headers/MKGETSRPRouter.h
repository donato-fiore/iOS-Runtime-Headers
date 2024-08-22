// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKGETSRPROUTER_H
#define MKGETSRPROUTER_H

@class NSString;
@protocol MKHTTPRouter, MKGETSRPRouterDelegate;

#import <Foundation/Foundation.h>

#import "MKSRPServer.h"

@interface MKGETSRPRouter : NSObject <MKHTTPRouter>

 {
    MKSRPServer *_srp;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKGETSRPRouterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSRP:(id)arg0 ;
-(void)server:(id)arg0 didReceiveRequest:(id)arg1 response:(id)arg2 ;


@end


#endif