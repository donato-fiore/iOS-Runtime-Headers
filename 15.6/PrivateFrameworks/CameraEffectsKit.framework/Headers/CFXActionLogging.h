// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXACTIONLOGGING_H
#define CFXACTIONLOGGING_H


#import <Foundation/Foundation.h>


@interface CFXActionLogging : NSObject



+(id)CFX_actionLogDictionaryWithEvent:(id)arg0 atLocation:(id)arg1 withEffectStack:(id)arg2 ;
+(id)actionLogAsJSONForEvent:(id)arg0 atLocation:(id)arg1 withEffectStack:(id)arg2 ;
+(id)actionLogAsStringForEvent:(id)arg0 atLocation:(id)arg1 withEffectStack:(id)arg2 ;
+(id)remainingMemory;


@end


#endif