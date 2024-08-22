// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPOSTCLIENTROUTER_H
#define MKPOSTCLIENTROUTER_H

@class NSString;
@protocol MKHTTPRouter, MKPOSTClientRouterDelegate;

#import <Foundation/Foundation.h>


@interface MKPOSTClientRouter : NSObject <MKHTTPRouter>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPOSTClientRouterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)server:(id)arg0 didReceiveRequest:(id)arg1 response:(id)arg2 ;


@end


#endif