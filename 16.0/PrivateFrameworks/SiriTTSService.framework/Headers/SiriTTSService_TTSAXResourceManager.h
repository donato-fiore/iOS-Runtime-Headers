// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSSERVICE_TTSAXRESOURCEMANAGER_H
#define SIRITTSSERVICE_TTSAXRESOURCEMANAGER_H

@class NSArray, TTSAXResourceManager;

#import <Foundation/Foundation.h>


@interface SiriTTSService_TTSAXResourceManager : NSObject

@property (retain, nonatomic) NSArray *allCompactResources; // ivar: _allCompactResources
@property (retain, nonatomic) TTSAXResourceManager *axManager; // ivar: _axManager


+(id)sharedInstance;
-(id)init;


@end


#endif