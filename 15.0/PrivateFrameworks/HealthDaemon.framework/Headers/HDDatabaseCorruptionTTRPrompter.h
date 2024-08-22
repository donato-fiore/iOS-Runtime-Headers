// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASECORRUPTIONTTRPROMPTER_H
#define HDDATABASECORRUPTIONTTRPROMPTER_H

@class _HKBehavior;

#import <Foundation/Foundation.h>

#import "HDDatabaseCorruptionEventStore.h"

@interface HDDatabaseCorruptionTTRPrompter : NSObject {
    HDDatabaseCorruptionEventStore *_corruptionStore;
    _HKBehavior *_behavior;
}


@property (copy, nonatomic) id *unitTest_willPresentTTRAlertHandler; // ivar: _unitTest_willPresentTTRAlertHandler


-(BOOL)shouldAttemptTTRForProfileIdentier:(id)arg0 component:(NSInteger)arg1 ;
-(id)TTRAttemptRecordForProfile:(id)arg0 ;
-(id)init;
-(id)initWithStore:(id)arg0 behavior:(id)arg1 ;
-(void)_popAlertWithRadarDescription:(id)arg0 ;
-(void)promptForEvent:(id)arg0 ;


@end


#endif