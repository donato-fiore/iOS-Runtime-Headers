// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTIMEMANAGER_H
#define MNTIMEMANAGER_H

@protocol MNTimeProvider;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"

@interface MNTimeManager : NSObject {
    MNObserverHashTable *_timeManagerObservers;
}


@property (retain, nonatomic) NSObject<MNTimeProvider> *provider; // ivar: _provider


+(CGFloat)currentTime;
+(id)currentDate;
+(id)sharedManager;
-(id)init;
-(void)_resetToDefaultProvider;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif