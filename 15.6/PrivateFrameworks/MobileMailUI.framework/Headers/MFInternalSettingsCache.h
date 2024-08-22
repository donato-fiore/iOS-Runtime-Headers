// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFINTERNALSETTINGSCACHE_H
#define MFINTERNALSETTINGSCACHE_H


#import <Foundation/Foundation.h>


@interface MFInternalSettingsCache : NSObject

@property (nonatomic) BOOL UIDebuggingEnabled; // ivar: _UIDebuggingEnabled
@property (nonatomic) BOOL tiltedTabSkyViewEnabled; // ivar: _tiltedTabSkyViewEnabled


+(id)sharedCache;


@end


#endif