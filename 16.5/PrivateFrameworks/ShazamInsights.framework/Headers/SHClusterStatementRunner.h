// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCLUSTERSTATEMENTRUNNER_H
#define SHCLUSTERSTATEMENTRUNNER_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface SHClusterStatementRunner : NSObject

@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (readonly, nonatomic) *sqlite3 db; // ivar: _db
@property (readonly, nonatomic) NSArray *validDatabaseKeys; // ivar: _validDatabaseKeys


+(id)supportedKeys;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)mediaItemsAtCohesionLevel:(NSInteger)arg0 forQueryMediaIDs:(id)arg1 filteredBySeedMediaIDs:(id)arg2 error:(*id)arg3 ;
-(id)mediaItemsFromPropertyCollection:(id)arg0 error:(*id)arg1 ;
-(id)mediaItemsSimilarToMediaItemValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)mediaItemsWithQuery:(id)arg0 tokens:(id)arg1 objects:(id)arg2 error:(*id)arg3 ;
-(id)supportedKeysForDatabase;
-(id)supportedKeysForDatabaseAsString;
-(id)supportedKeysForDatabaseAsStringWithPrefix:(id)arg0 ;
-(void)dealloc;


@end


#endif