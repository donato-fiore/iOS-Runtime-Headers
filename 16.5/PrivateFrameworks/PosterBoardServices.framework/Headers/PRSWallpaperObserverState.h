// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSWALLPAPEROBSERVERSTATE_H
#define PRSWALLPAPEROBSERVERSTATE_H


#import <Foundation/Foundation.h>

#import "PRSPosterConfiguration.h"

@interface PRSWallpaperObserverState : NSObject

@property (readonly, nonatomic) PRSPosterConfiguration *activeHome; // ivar: _activeHome
@property (readonly, nonatomic) PRSPosterConfiguration *activeLock; // ivar: _activeLock
@property (readonly, nonatomic) PRSPosterConfiguration *selectedHome; // ivar: _selectedHome
@property (readonly, nonatomic) PRSPosterConfiguration *selectedLock; // ivar: _selectedLock


-(id)_initWithSelectedLock:(id)arg0 selectedHome:(id)arg1 activeLock:(id)arg2 activeHome:(id)arg3 ;
-(id)description;
-(id)init;


@end


#endif