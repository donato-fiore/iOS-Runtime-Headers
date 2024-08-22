// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADCLIENT_H
#define ADCLIENT_H


#import <Foundation/Foundation.h>


@interface ADClient : NSObject



+(id)sharedClient;
-(void)addClientToSegments:(id)arg0 replaceExisting:(BOOL)arg1 ;
-(void)determineAppInstallationAttributionWithCompletionHandler:(id)arg0 ;
-(void)lookupAdConversionDetails:(id)arg0 ;
-(void)requestAttributionDetailsWithBlock:(id)arg0 ;
-(void)segmentDataForSignedInUserWithBlock:(id)arg0 ;


@end


#endif