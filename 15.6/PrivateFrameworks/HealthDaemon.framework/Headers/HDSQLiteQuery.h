// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITEQUERY_H
#define HDSQLITEQUERY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HDSQLiteQueryDescriptor.h"
#import "HDSQLiteDatabase.h"

@interface HDSQLiteQuery : NSObject {
    HDSQLiteQueryDescriptor *_descriptor;
}


@property (readonly) HDSQLiteDatabase *database; // ivar: _database
@property (readonly, copy) NSString *lastSQLStatement; // ivar: _lastSQLStatement
@property (readonly) HDSQLiteQueryDescriptor *queryDescriptor;


-(BOOL)deleteAllEntitiesWithError:(*id)arg0 ;
-(BOOL)enumeratePersistentIDsAndProperties:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)enumerateProperties:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(id)initWithDatabase:(id)arg0 descriptor:(id)arg1 ;


@end


#endif