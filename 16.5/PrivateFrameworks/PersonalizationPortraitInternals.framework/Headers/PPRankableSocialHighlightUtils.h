// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPRANKABLESOCIALHIGHLIGHTUTILS_H
#define PPRANKABLESOCIALHIGHLIGHTUTILS_H


#import <Foundation/Foundation.h>


@interface PPRankableSocialHighlightUtils : NSObject



+(BOOL)isSearchableItemCollaboration:(id)arg0 ;
+(id)rankableHighlightFromSearchableItem:(id)arg0 attribution:(id)arg1 autoDonatingChats:(id)arg2 applicationIdentifiers:(id)arg3 clientIdentifier:(id)arg4 variant:(id)arg5 ;
+(id)rankableHighlightFromSyncedItem:(id)arg0 applicationIdentifiers:(id)arg1 clientIdentifier:(id)arg2 ;
+(int)socialContactSourceForContactSource:(unsigned char)arg0 ;


@end


#endif