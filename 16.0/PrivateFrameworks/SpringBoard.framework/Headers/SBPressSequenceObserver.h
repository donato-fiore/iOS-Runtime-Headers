// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPRESSSEQUENCEOBSERVER_H
#define SBPRESSSEQUENCEOBSERVER_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>

#import "SBPressCollector.h"

@interface SBPressSequenceObserver : NSObject {
    NSUUID *_sosTriggerUUID;
}


@property (readonly, nonatomic) SBPressCollector *pressCollector; // ivar: _pressCollector
@property (readonly, nonatomic) NSString *pressName; // ivar: _pressName


-(id)init;
-(id)initWithPressName:(id)arg0 ;
-(void)_notePowerDownImminent;
-(void)dealloc;
-(void)noteDidBeginSOSWithUUID:(id)arg0 ;
-(void)pressCollector:(id)arg0 didCollectSequence:(id)arg1 ;


@end


#endif