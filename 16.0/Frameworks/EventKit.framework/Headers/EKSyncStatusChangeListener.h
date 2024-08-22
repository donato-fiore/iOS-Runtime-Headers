// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKSYNCSTATUSCHANGELISTENER_H
#define EKSYNCSTATUSCHANGELISTENER_H

@class NSMutableDictionary;
@protocol EKSyncStatusChangeListenerDelegate;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKSyncStatusChangeListener : NSObject {
    EKEventStore *_eventStore;
    NSMutableDictionary *_sourceLastSyncingEndDates;
}


@property (weak, nonatomic) NSObject<EKSyncStatusChangeListenerDelegate> *delegate; // ivar: _delegate


-(id)initWithEventStore:(id)arg0 ;
-(void)_eventStoreChanged:(id)arg0 ;
-(void)_setupSources;


@end


#endif