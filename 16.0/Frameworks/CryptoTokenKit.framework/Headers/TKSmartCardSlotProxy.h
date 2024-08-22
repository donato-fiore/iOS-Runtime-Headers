// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKSMARTCARDSLOTPROXY_H
#define TKSMARTCARDSLOTPROXY_H

@class NSHashTable;
@protocol TKProtocolSmartCardSlotNotification;

#import <Foundation/Foundation.h>

#import "TKSmartCardSlot.h"

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification>

 {
    TKSmartCardSlot *_slot;
}


@property (readonly) NSHashTable *cards; // ivar: _cards


-(id)initWithSlot:(id)arg0 ;
-(void)cardSessionRequested;
-(void)notifyWithParameters:(id)arg0 reply:(id)arg1 ;


@end


#endif