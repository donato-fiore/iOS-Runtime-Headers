// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTTLDELETIONPOLICY_H
#define PPTTLDELETIONPOLICY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PPLocalNamedEntityStore.h"
#import "PPLocalTopicStore.h"
#import "PPLocalLocationStore.h"

@interface PPTTLDeletionPolicy : NSObject {
    NSArray *_rules;
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalTopicStore *_topicStore;
    PPLocalLocationStore *_locationStore;
}




+(id)defaultPolicy;
-(BOOL)applyPolicyWithError:(*id)arg0 shouldContinueBlock:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithRules:(id)arg0 namedEntityStore:(id)arg1 topicStore:(id)arg2 locationStore:(id)arg3 ;


@end


#endif