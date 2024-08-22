// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHINSIGHTSNETWORKREQUESTER_H
#define SHINSIGHTSNETWORKREQUESTER_H

@class NSString;
@protocol SHNetworkRequester;

#import <Foundation/Foundation.h>


@interface SHInsightsNetworkRequester : NSObject <SHNetworkRequester>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)response:(id)arg0 data:(id)arg1 error:(id)arg2 ;
-(void)downloadResourceFromRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif