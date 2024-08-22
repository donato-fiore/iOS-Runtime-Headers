// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFVOICESEARCHMANAGER_H
#define _SFVOICESEARCHMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _SFVoiceSearchManager : NSObject

@property (readonly, nonatomic) BOOL liveCompletionList;
@property (readonly, nonatomic) NSArray *queryItems;
@property (readonly, nonatomic) BOOL showInstantAnswer;
@property (readonly, nonatomic) BOOL useSimulatedLocalHeuristics;


+(id)sharedManager;
-(BOOL)_useVoiceSearchQType;
-(BOOL)presentDictationDiscoveryAlertIfNeeded;
-(id)_kfed;


@end


#endif