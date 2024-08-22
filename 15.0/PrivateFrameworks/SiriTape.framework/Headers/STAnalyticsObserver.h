// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STANALYTICSOBSERVER_H
#define STANALYTICSOBSERVER_H

@class AFAnalyticsObserverConnection, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface STAnalyticsObserver : NSObject {
    AFAnalyticsObserverConnection *_connection;
    NSMutableDictionary *_observerActions;
}




+(id)sharedObserver;
-(id)init;
-(void)addObserverActionForType:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif