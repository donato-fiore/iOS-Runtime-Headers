// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSANALYTICS_H
#define INSANALYTICS_H

@class NSHashTable;
@protocol OS_dispatch_queue, INSAnalyticsDataSource;

#import <Foundation/Foundation.h>


@interface INSAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
}


@property (weak, nonatomic) NSObject<INSAnalyticsDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers


+(id)sharedAnalytics;
-(id)_init;
-(id)contextDictionaryForCommand:(id)arg0 ;
-(id)contextDictionaryForError:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)logEventWithType:(NSInteger)arg0 context:(id)arg1 contextNoCopy:(BOOL)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif