// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3PERSISTENTIDGENERATOR_H
#define ML3PERSISTENTIDGENERATOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ML3DatabaseConnection.h"

@interface ML3PersistentIDGenerator : NSObject {
    ML3DatabaseConnection *_connection;
    NSString *_tableName;
    NSString *_validateStartingPersistentIdSQL;
    NSString *_nextUsedPersistentIdSQL;
    NSInteger _currentPersistentID;
    NSInteger _nextUsedPersistentID;
}




-(NSInteger)nextPersistentID;
-(id)initWithDatabaseConnection:(id)arg0 tableName:(id)arg1 ;
-(void)_calculateNewRun;


@end


#endif