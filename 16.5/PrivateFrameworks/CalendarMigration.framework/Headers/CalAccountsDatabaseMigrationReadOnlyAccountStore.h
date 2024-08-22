// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALACCOUNTSDATABASEMIGRATIONREADONLYACCOUNTSTORE_H
#define CALACCOUNTSDATABASEMIGRATIONREADONLYACCOUNTSTORE_H

@class NSString;
@protocol CalMigrationReadOnlyAccountStore;

#import <Foundation/Foundation.h>


@interface CalAccountsDatabaseMigrationReadOnlyAccountStore : NSObject <CalMigrationReadOnlyAccountStore>

 {
    *sqlite3 _database;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_unarchiveData:(id)arg0 ;
+(int)_calendarDataClassIdentifier:(struct sqlite3 *)arg0 ;
-(id)accountWithIdentifier:(id)arg0 ;
-(id)childAccountsForAccount:(id)arg0 withTypeIdentifier:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)topLevelAccountsWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif