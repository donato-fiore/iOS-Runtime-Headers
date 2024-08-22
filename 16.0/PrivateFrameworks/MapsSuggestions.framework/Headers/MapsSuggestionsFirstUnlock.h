// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSFIRSTUNLOCK_H
#define MAPSSUGGESTIONSFIRSTUNLOCK_H

@class NSString;
@protocol GEOKeyBagProtectedDataDidBecomeAvailableObserver;


#import "MapsSuggestionsFirstUnlockBase.h"

@interface MapsSuggestionsFirstUnlock : MapsSuggestionsFirstUnlockBase <GEOKeyBagProtectedDataDidBecomeAvailableObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasDeviceBeenUnlocked;
-(id)init;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)protectedDataDidBecomeAvailable:(id)arg0 ;


@end


#endif