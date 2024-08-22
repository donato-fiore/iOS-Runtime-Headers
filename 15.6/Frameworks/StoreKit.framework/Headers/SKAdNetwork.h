// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKADNETWORK_H
#define SKADNETWORK_H


#import <Foundation/Foundation.h>


@interface SKAdNetwork : NSObject



+(void)endImpression:(id)arg0 completionHandler:(id)arg1 ;
+(void)registerAppForAdNetworkAttribution;
+(void)startImpression:(id)arg0 completionHandler:(id)arg1 ;
+(void)updateConversionValue:(NSInteger)arg0 ;
+(void)updatePostbackConversionValue:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif