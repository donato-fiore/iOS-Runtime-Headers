// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKADNETWORK_H
#define SKADNETWORK_H


#import <Foundation/Foundation.h>


@interface SKAdNetwork : NSObject



+(void)endImpression:(id)arg0 completionHandler:(id)arg1 ;
+(void)registerAppForAdNetworkAttribution;
+(void)startImpression:(id)arg0 completionHandler:(id)arg1 ;
+(void)updateConversionValue:(NSInteger)arg0 ;
+(void)updatePostbackConversionValue:(NSInteger)arg0 coarseValue:(id)arg1 completionHandler:(id)arg2 ;
+(void)updatePostbackConversionValue:(NSInteger)arg0 coarseValue:(id)arg1 lockWindow:(BOOL)arg2 completionHandler:(id)arg3 ;
+(void)updatePostbackConversionValue:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif