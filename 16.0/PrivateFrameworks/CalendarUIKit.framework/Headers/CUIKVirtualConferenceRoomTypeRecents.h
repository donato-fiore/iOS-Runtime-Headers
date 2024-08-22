// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKVIRTUALCONFERENCEROOMTYPERECENTS_H
#define CUIKVIRTUALCONFERENCEROOMTYPERECENTS_H


#import <Foundation/Foundation.h>


@interface CUIKVirtualConferenceRoomTypeRecents : NSObject



+(id)_extensionBundleIdentifierFromIdentifier:(id)arg0 ;
+(id)_identifierFromRoomType:(id)arg0 ;
+(id)roomTypesOrderedByMRU:(id)arg0 forSource:(id)arg1 ;
+(void)_updateSavedMRUDictWithRoomTypes:(id)arg0 source:(id)arg1 ;
+(void)cleanup;
+(void)selectRoomType:(id)arg0 forSource:(id)arg1 ;


@end


#endif