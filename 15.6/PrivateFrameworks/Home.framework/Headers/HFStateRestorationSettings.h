// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSTATERESTORATIONSETTINGS_H
#define HFSTATERESTORATIONSETTINGS_H

@class NSHashTable, NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface HFStateRestorationSettings : NSObject

@property (readonly, nonatomic) int notifyRegistrationToken; // ivar: _notifyRegistrationToken
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (copy, nonatomic) NSString *selectedHomeAppTabIdentifier;
@property (copy, nonatomic) NSUUID *selectedHomeIdentifier;
@property (readonly, copy, nonatomic) NSUUID *selectedRoomIdentifierForSelectedHome;


+(id)sharedInstance;
-(id)_homeAppPreferencesValueForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)_roomKeyForHomeIdentifier:(id)arg0 ;
-(id)init;
-(id)selectedRoomIdentifierForHomeIdentifier:(id)arg0 ;
-(void)_selectedHomeDidChange;
-(void)_setHomeAppPreferencesValue:(id)arg0 forKey:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)saveSelectedRoomIdentifier:(id)arg0 forHomeIdentifier:(id)arg1 ;
-(void)syncToNanoPrefs;


@end


#endif