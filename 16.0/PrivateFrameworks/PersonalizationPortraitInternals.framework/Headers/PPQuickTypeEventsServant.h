// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPQUICKTYPEEVENTSSERVANT_H
#define PPQUICKTYPEEVENTSSERVANT_H

@protocol PPQuickTypeServantProtocol;

#import <Foundation/Foundation.h>

#import "PPLocalEventStore.h"

@interface PPQuickTypeEventsServant : NSObject <PPQuickTypeServantProtocol>

 {
    PPLocalEventStore *_localEventStore;
}




-(id)init;
-(id)quickTypeItemsWithQuery:(id)arg0 limit:(NSUInteger)arg1 explanationSet:(id)arg2 ;


@end


#endif