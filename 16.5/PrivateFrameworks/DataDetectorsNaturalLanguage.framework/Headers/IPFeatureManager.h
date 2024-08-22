// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPFEATUREMANAGER_H
#define IPFEATUREMANAGER_H


#import <Foundation/Foundation.h>


@interface IPFeatureManager : NSObject



+(id)featuresForTextString:(id)arg0 inMessageUnit:(id)arg1 ;
+(void)scanEventsInMessageUnits:(id)arg0 completionHandler:(id)arg1 ;
+(void)scanEventsInMessageUnits:(id)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;
+(void)setEventStoreForTesting:(id)arg0 ;


@end


#endif