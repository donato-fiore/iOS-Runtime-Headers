// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALMIGRATIONFAILURE_H
#define CALMIGRATIONFAILURE_H

@class NSArray, NSString, NSError;

#import <Foundation/Foundation.h>


@interface CalMigrationFailure : NSObject

@property (readonly, copy, nonatomic) NSArray *databaseIntegrityErrors; // ivar: _databaseIntegrityErrors
@property (readonly, copy, nonatomic) NSString *failureDescription; // ivar: _failureDescription
@property (readonly, nonatomic) BOOL isFatal; // ivar: _isFatal
@property (readonly, copy, nonatomic) NSString *relatedPath; // ivar: _relatedPath
@property (readonly, nonatomic) NSUInteger stage; // ivar: _stage
@property (readonly, copy, nonatomic) NSError *underlyingError; // ivar: _underlyingError


+(id)_labelForStage:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithDatabaseIntegrityErrors:(id)arg0 ;
-(id)initWithDescription:(id)arg0 stage:(NSUInteger)arg1 underlyingError:(id)arg2 relatedPath:(id)arg3 isFatal:(BOOL)arg4 ;


@end


#endif