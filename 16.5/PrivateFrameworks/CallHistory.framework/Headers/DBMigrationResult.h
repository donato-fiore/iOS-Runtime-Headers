// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBMIGRATIONRESULT_H
#define DBMIGRATIONRESULT_H


#import <Foundation/Foundation.h>


@interface DBMigrationResult : NSObject

@property (nonatomic) NSInteger dbVersion; // ivar: _dbVersion
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode


-(id)initWithErrorCode:(NSInteger)arg0 andDBVersion:(NSInteger)arg1 ;


@end


#endif