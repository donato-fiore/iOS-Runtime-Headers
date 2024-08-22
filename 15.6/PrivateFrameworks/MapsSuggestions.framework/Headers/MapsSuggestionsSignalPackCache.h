// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSSIGNALPACKCACHE_H
#define MAPSSUGGESTIONSSIGNALPACKCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsSignalPackCache : NSObject {
    NSMutableArray *_mapItems;
    NSMutableArray *_signalPacks;
    NSMutableArray *_entries;
}




-(BOOL)insertMapItem:(id)arg0 signalPack:(id)arg1 entry:(id)arg2 ;
-(id)init;
-(id)signalPackForMapItem:(id)arg0 ;


@end


#endif