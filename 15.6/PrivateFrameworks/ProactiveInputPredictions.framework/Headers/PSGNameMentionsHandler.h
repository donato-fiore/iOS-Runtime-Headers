// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSGNAMEMENTIONSHANDLER_H
#define PSGNAMEMENTIONSHANDLER_H


#import <Foundation/Foundation.h>


@interface PSGNameMentionsHandler : NSObject



+(id)sharedInstance;
-(id)getNameMentionsTriggerForContext:(id)arg0 recipientNames:(id)arg1 availableApps:(id)arg2 localeIdentifier:(id)arg3 explanationSet:(id)arg4 ;
-(id)getPredictedItemsForTrigger:(id)arg0 recipientNames:(id)arg1 bundleIdentifier:(id)arg2 maxItems:(NSUInteger)arg3 ;


@end


#endif