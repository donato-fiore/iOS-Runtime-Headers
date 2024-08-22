// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSYSTEMINTENTAPPENUMERATOR_H
#define WFSYSTEMINTENTAPPENUMERATOR_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFSystemIntentAppEnumerator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    NSDictionary *_identifiersByIntentName;
    NSDictionary *_identifiersByUserActivityType;
}




-(id)init;
-(id)supportedIdentifiersForIntentClassName:(id)arg0 includingUserActivityBasedApps:(BOOL)arg1 ;
-(void)dealloc;
-(void)enumerate;


@end


#endif