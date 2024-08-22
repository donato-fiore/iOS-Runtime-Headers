// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFEVENTMANAGER_H
#define NFEVENTMANAGER_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NFEventManager : NSObject

@property (readonly, nonatomic) NSMutableSet *events; // ivar: _events
@property (readonly, nonatomic) NSMutableDictionary *triggers; // ivar: _triggers


-(id)init;
-(void)attemptTriggersForCurrentEvent:(id)arg0 ;
-(void)fireEvent:(id)arg0 ;
-(void)handleAlwaysTrigger:(id)arg0 event:(id)arg1 ;
-(void)handleOnceTrigger:(id)arg0 event:(id)arg1 ;
-(void)triggerAlwaysWhenAllEventsHaveOccurred:(id)arg0 block:(id)arg1 ;
-(void)triggerOnAnyEvent:(id)arg0 block:(id)arg1 ;
-(void)triggerOnEvent:(id)arg0 block:(id)arg1 ;
-(void)triggerOnceWhenAllEventsHaveOccurred:(id)arg0 block:(id)arg1 ;
-(void)triggerOnceWhenAnyEventHasOccurred:(id)arg0 block:(id)arg1 ;


@end


#endif