// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCUSERINTERFACESTATESTORE_H
#define DOCUSERINTERFACESTATESTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DOCUserInterfaceStateStore : NSObject

@property (retain) NSMutableDictionary *uiStateMap; // ivar: _uiStateMap


+(id)sharedStore;
-(id)_loadUserInterfaceStateFromDefaultsForConfiguration:(id)arg0 ;
-(id)_mostRecentInterfaceStateForConfiguration:(id)arg0 ;
-(id)_sortedInterfaceStateKeys;
-(id)docUserDefaults;
-(id)init;
-(id)interfaceStateForConfiguration:(id)arg0 ;
-(void)_pruneOldState;
-(void)_writeMostRecentUserInterfaceStateToDefaultsForConfiguration:(id)arg0 ;
-(void)_writeUserInterfaceStateToDefaultsForConfiguration:(id)arg0 ;
-(void)purgeApplicationStateForIdentifiers:(id)arg0 configuration:(id)arg1 ;
-(void)purgeStateForConfiguration:(id)arg0 ;
-(void)updateInterfaceState:(id)arg0 forConfiguration:(id)arg1 ;


@end


#endif