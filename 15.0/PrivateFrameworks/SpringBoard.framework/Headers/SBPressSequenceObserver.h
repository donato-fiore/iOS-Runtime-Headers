// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPRESSSEQUENCEOBSERVER_H
#define SBPRESSSEQUENCEOBSERVER_H

@class NSUUID, NSString;
@protocol SBPressCollectorDelegate, SBAWDMetricDelegate, SBPressSequenceObserverDelegate;

#import <Foundation/Foundation.h>

#import "SBPressCollector.h"

@interface SBPressSequenceObserver : NSObject <SBPressCollectorDelegate, SBAWDMetricDelegate>

 {
    NSUUID *_sosTriggerUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPressSequenceObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBPressCollector *pressCollector; // ivar: _pressCollector
@property (readonly, nonatomic) NSString *pressName; // ivar: _pressName
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPressName:(id)arg0 ;
-(void)_notePowerDownImminent;
-(void)dealloc;
-(void)metricDidPost:(id)arg0 data:(id)arg1 ;
-(void)noteDidBeginSOSWithUUID:(id)arg0 ;
-(void)pressCollector:(id)arg0 didCollectSequence:(id)arg1 ;


@end


#endif