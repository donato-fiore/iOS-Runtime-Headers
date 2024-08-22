// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC23SIRIINVOCATIONANALYTICS16CONVERSATIONTURN_H
#define _TTC23SIRIINVOCATIONANALYTICS16CONVERSATIONTURN_H


#import <Foundation/Foundation.h>


@interface _TtC23SiriInvocationAnalytics16ConversationTurn : NSObject {
    ? asrEvents;
    ? flowEvents;
    ? dimEvents;
    ? ueiEvents;
    ? mhEvents;
    ? orchEvents;
    ? turnID;
    ? domain;
    ? domainSource;
    ? timestamp;
    ? conversationTurnType;
}




-(id)debugString;
-(id)init;


@end


#endif