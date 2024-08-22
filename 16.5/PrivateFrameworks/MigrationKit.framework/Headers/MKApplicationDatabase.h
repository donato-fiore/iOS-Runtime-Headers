// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKAPPLICATIONDATABASE_H
#define MKAPPLICATIONDATABASE_H


#import <Foundation/Foundation.h>


@interface MKApplicationDatabase : NSObject {
    *sqlite3 _database;
}




-(BOOL)_addAppStoreIdentifier:(id)arg0 ;
-(BOOL)addIdentifier:(id)arg0 ;
-(NSInteger)countForAppStoreIdentifiers;
-(id)appStoreIdentifiers;
-(id)identifiers;
-(id)init;
-(void)addAppStoreIdentifier:(id)arg0 ;
-(void)addIdentifiers:(id)arg0 ;
-(void)begin;
-(void)close;
-(void)commit;
-(void)create;
-(void)dealloc;
-(void)drop;
-(void)open:(id)arg0 ;
-(void)query:(id)arg0 ;
-(void)rollback;


@end


#endif