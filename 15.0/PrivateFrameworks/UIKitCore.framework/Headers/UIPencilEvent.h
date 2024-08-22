// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPENCILEVENT_H
#define UIPENCILEVENT_H

@class NSHashTable;


#import "UIEvent.h"

@interface UIPencilEvent : UIEvent

@property (retain, nonatomic) NSHashTable *trackedInteractions; // ivar: _trackedInteractions


-(NSInteger)subtype;
-(NSInteger)type;
-(id)_init;
-(id)collectAllActiveInteractions;
-(void)_sendEventToInteractions;
-(void)deregisterAllInteractionsForWindow:(id)arg0 ;
-(void)deregisterInteraction:(id)arg0 ;
-(void)registerInteraction:(id)arg0 ;


@end


#endif