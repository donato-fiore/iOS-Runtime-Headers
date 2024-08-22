// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFVOICESEARCHMANAGER_H
#define SFVOICESEARCHMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SFVoiceSearchManager : NSObject

@property (readonly, nonatomic) NSInteger availability; // ivar: _availability
@property (readonly, nonatomic) BOOL liveCompletionList;
@property (readonly, nonatomic) NSArray *queryItems;


+(id)sharedManager;
-(BOOL)presentDictationDiscoveryAlertIfNeeded;
-(NSInteger)_voiceSearchAvailability;
-(id)_kfed;
-(id)init;
-(void)_updateDictationAvailability;


@end


#endif