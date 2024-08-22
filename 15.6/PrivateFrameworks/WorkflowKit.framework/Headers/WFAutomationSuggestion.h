// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUTOMATIONSUGGESTION_H
#define WFAUTOMATIONSUGGESTION_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WFTrigger.h"
#import "WFWorkflow.h"

@interface WFAutomationSuggestion : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *intentType; // ivar: _intentType
@property (readonly, nonatomic) NSData *serializedSuggestion; // ivar: _serializedSuggestion
@property (readonly, nonatomic) NSString *trialID; // ivar: _trialID
@property (readonly, nonatomic) WFTrigger *trigger; // ivar: _trigger
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow


+(id)generateTestSuggestions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIntent:(id)arg0 trigger:(id)arg1 bundleIdentifier:(id)arg2 serializedSuggestion:(id)arg3 trialID:(id)arg4 ;
-(id)initWithShortcut:(id)arg0 trigger:(id)arg1 bundleIdentifier:(id)arg2 serializedSuggestion:(id)arg3 trialID:(id)arg4 ;
-(id)initWithUserActivity:(id)arg0 trigger:(id)arg1 bundleIdentifier:(id)arg2 serializedSuggestion:(id)arg3 trialID:(id)arg4 ;


@end


#endif