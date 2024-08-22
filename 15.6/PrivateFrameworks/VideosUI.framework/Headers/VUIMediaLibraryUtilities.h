// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIALIBRARYUTILITIES_H
#define VUIMEDIALIBRARYUTILITIES_H


#import <Foundation/Foundation.h>


@interface VUIMediaLibraryUtilities : NSObject



+(id)_sortIndexesForObjects:(id)arg0 titleForObjectBlock:(id)arg1 ;
// +(id)groupingForMediaEntities:(id)arg0 groupingKeyPath:(id)arg1 groupingSortComparator:(id)arg2 performDefaultSort:(unk)arg3 sortIndexPropertyKey:(BOOL)arg4  ;
+(id)mediaItemEntityTypesSortComparator:(SEL)arg0 ;
+(id)sortIndexesForGrouping:(id)arg0 ;
+(id)sortIndexesForMediaEntities:(id)arg0 sortIndexPropertyKey:(id)arg1 ;


@end


#endif