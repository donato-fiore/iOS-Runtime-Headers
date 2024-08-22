// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSEARCHABLEITEMMANIFEST_H
#define PSSEARCHABLEITEMMANIFEST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PSSearchableItemManifest : NSObject

@property (retain, nonatomic) NSMutableArray *searchableItems; // ivar: _searchableItems


-(BOOL)writeToPlistAndStringsFilesAtURL:(id)arg0 error:(*id)arg1 ;
-(id)_escapedStringForString:(id)arg0 ;
-(id)_stringKeyForString:(id)arg0 ;
-(id)init;
-(id)items;
-(void)addSearchableItem:(id)arg0 ;
-(void)addSearchableItems:(id)arg0 ;
-(void)removeSearchableItem:(id)arg0 ;


@end


#endif