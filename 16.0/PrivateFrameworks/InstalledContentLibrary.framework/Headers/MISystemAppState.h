// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MISYSTEMAPPSTATE_H
#define MISYSTEMAPPSTATE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MISystemAppState : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *appStateQueue; // ivar: _appStateQueue
@property (retain, nonatomic) NSMutableDictionary *systemAppStateList; // ivar: _systemAppStateList


+(id)_systemAppStateFromURL:(id)arg0 ;
+(id)sharedList;
-(id)_onQueue_retrieveSystemAppStateRestoringBackedUpState:(BOOL)arg0 ;
-(id)init;
-(id)systemAppStateDictionaryRestoringBackedUpState:(BOOL)arg0 ;
-(void)addIdentifier:(id)arg0 withState:(int)arg1 ;
-(void)removeIdentifiers:(id)arg0 ;


@end


#endif