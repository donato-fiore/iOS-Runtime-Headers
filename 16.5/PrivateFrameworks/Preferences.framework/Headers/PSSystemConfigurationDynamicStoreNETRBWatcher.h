// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSYSTEMCONFIGURATIONDYNAMICSTORENETRBWATCHER_H
#define PSSYSTEMCONFIGURATIONDYNAMICSTORENETRBWATCHER_H


#import <Foundation/Foundation.h>


@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject {
    *__CFRunLoopSource _scRunLoopSource;
    *__SCDynamicStore _scDynamicStore;
    int _netrbState;
    int _netrbReason;
}




+(id)sharedManager;
-(BOOL)isDataEnabled;
-(BOOL)isTetheringEnabled;
-(BOOL)shouldShowTethering;
-(id)init;
-(void)dealloc;
-(void)getNETRBState:(*int)arg0 andReason:(*int)arg1 ;
-(void)readNETRBState:(*int)arg0 andReason:(*int)arg1 ;
-(void)sendStateUpdate;


@end


#endif