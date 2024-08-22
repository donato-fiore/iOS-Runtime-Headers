// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPERSONCONTACTINFOMIGRATOR_H
#define PLPERSONCONTACTINFOMIGRATOR_H

@class CNContactStore, NSArray;

#import <Foundation/Foundation.h>


@interface PLPersonContactInfoMigrator : NSObject {
    CNContactStore *_contactStore;
    NSArray *_keysToFetch;
    int _updateNameCount;
    int _populateMatchingDictionaryCount;
}




+(id)migrationQueue;
+(void)migratePersonContactInfoInPhotoLibrary:(id)arg0 ;
-(id)enumerateResultsWithIncrementalSaveUsingFetchRequest:(id)arg0 inContext:(id)arg1 withBlock:(id)arg2 ;
-(id)init;
-(void)migratePerson:(id)arg0 ;
-(void)migratePersonContactInfoInContext:(id)arg0 ;
-(void)migratePersonContactInfoInPhotoLibrary:(id)arg0 ;
-(void)populateMatchingDictionaryOfPerson:(id)arg0 withContact:(id)arg1 ;
-(void)updateNameOfPerson:(id)arg0 withContact:(id)arg1 ;


@end


#endif