// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HVCONSUMERCOORDINATORGUARDEDDATA_H
#define HVCONSUMERCOORDINATORGUARDEDDATA_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "HVBudget.h"

@interface HVConsumerCoordinatorGuardedData : NSObject {
    HVBudget *_budget;
    NSMapTable *_mailConsumers;
    NSMapTable *_messagesConsumers;
    NSMapTable *_newsConsumers;
    NSMapTable *_notesConsumers;
    NSMapTable *_parsecConsumers;
    NSMapTable *_photosConsumers;
    NSMapTable *_remindersConsumers;
    NSMapTable *_safariConsumers;
    NSMapTable *_siriConsumers;
    NSMapTable *_thirdPartyAppConsumers;
    NSMapTable *_interactionConsumers;
    NSMapTable *_userActivityConsumers;
}




-(id)init;


@end


#endif