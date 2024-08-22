// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHHISTORYMANAGER_H
#define PXSEARCHHISTORYMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXSearchHistoryManager : NSObject

@property (retain, nonatomic) NSArray *recentSearches; // ivar: _recentSearches


+(id)sharedManager;
-(BOOL)_writeRecentSearches:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(id)_readRecentSearchesFromURL:(id)arg0 ;
-(void)clearRecentSearches;
-(void)saveRecentSearch:(id)arg0 ;


@end


#endif