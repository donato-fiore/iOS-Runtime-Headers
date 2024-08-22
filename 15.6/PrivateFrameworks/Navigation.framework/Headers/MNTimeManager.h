// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif