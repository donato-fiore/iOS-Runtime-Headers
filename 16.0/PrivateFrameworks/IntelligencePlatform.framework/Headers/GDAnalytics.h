// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDANALYTICS_H
#define GDANALYTICS_H


#import <Foundation/Foundation.h>


@interface GDAnalytics : NSObject



+(void)sendEventForProductionLazyWithEventName:(id)arg0 eventPayloadBuilder:(id)arg1 ;
+(void)sendEventForProductionWithEventName:(id)arg0 eventPayload:(id)arg1 ;
-(id)init;


@end


#endif