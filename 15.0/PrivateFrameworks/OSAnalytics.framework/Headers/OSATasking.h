// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSATASKING_H
#define OSATASKING_H


#import <Foundation/Foundation.h>


@interface OSATasking : NSObject



+(BOOL)preference:(id)arg0 alreadySetInInstructions:(id)arg1 ;
+(BOOL)shouldApplyPreference:(id)arg0 ;
+(id)applyTasking:(id)arg0 taskId:(id)arg1 fromBlob:(id)arg2 ;
+(id)getAvailableTaskingRoutings;
+(id)getDefaultTasking;
+(id)getInstalledTaskIds;
+(id)normalizeInstructions:(id)arg0 ;
+(id)proxyTasking:(id)arg0 taskId:(id)arg1 usingConfig:(id)arg2 fromBlob:(id)arg3 ;
+(id)selectConfigFromBlob:(id)arg0 ;
+(void)checkTaskingRelevance;
+(void)setCRKeyToRandomValue;


@end


#endif