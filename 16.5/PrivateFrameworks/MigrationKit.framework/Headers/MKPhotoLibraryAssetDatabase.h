// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPHOTOLIBRARYASSETDATABASE_H
#define MKPHOTOLIBRARYASSETDATABASE_H


#import <Foundation/Foundation.h>


@interface MKPhotoLibraryAssetDatabase : NSObject {
    *sqlite3 _database;
    NSUInteger _count;
}




-(NSUInteger)count;
-(NSUInteger)countForCollection:(id)arg0 ;
-(id)asset;
-(id)collections;
-(id)identifiersForCollection:(id)arg0 offset:(NSUInteger)arg1 limit:(NSUInteger)arg2 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(void)addAsset:(id)arg0 ;
-(void)begin;
-(void)close;
-(void)commit;
-(void)create;
-(void)dealloc;
-(void)open:(id)arg0 ;
-(void)query:(id)arg0 ;
-(void)remove:(id)arg0 ;
-(void)rollback;
-(void)setIdentifier:(id)arg0 forAsset:(id)arg1 ;


@end


#endif