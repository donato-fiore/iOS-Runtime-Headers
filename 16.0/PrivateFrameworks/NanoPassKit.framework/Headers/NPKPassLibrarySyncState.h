// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPASSLIBRARYSYNCSTATE_H
#define NPKPASSLIBRARYSYNCSTATE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NPKPassLibrarySyncState : NSObject {
    NSDictionary *_syncStates;
}




+(BOOL)_shouldAddPass:(id)arg0 withDeviceIsTinker:(BOOL)arg1 supportHealthPass:(BOOL)arg2 stateVersion:(NSUInteger)arg3 ;
-(id)initWithPasses:(id)arg0 device:(id)arg1 ;
-(id)initWithStateVersionSyncStates:(id)arg0 ;
-(id)mergeWithPassLibrarySyncState:(id)arg0 ;
-(id)passSyncStateWithVersion:(NSUInteger)arg0 ;
-(id)updateReconcileState:(id)arg0 expectedVersion:(NSUInteger)arg1 ;


@end


#endif