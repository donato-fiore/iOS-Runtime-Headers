// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDENTITYENCODER_H
#define HDENTITYENCODER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "HDSQLiteDatabase.h"
#import "HDProfile.h"
#import "HDEntityEncoder.h"
#import "HDDatabaseTransaction.h"

@interface HDEntityEncoder : NSObject

@property (readonly, copy, nonatomic) id *authorizationFilter; // ivar: _authorizationFilter
@property (readonly, nonatomic) HDSQLiteDatabase *database; // ivar: _database
@property (readonly, copy, nonatomic) NSDictionary *encodingOptions; // ivar: _encodingOptions
@property (readonly, nonatomic) Class entityClass; // ivar: _entityClass
@property (readonly, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSInteger purpose; // ivar: _purpose
@property (readonly, nonatomic) HDEntityEncoder *superclassEncoder; // ivar: _superclassEncoder
@property (readonly, nonatomic) HDDatabaseTransaction *transaction; // ivar: _transaction


+(NSInteger)estimatedEncodedSize;
-(BOOL)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 error:(*id)arg3 ;
-(BOOL)generateCodableRepresentationsForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 maxBytesPerRepresentation:(NSInteger)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(id)codableRepresentationForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)createBareObjectWithRow:(struct HDSQLiteRow *)arg0 ;
-(id)initWithHealthEntityClass:(Class)arg0 profile:(id)arg1 transaction:(id)arg2 purpose:(NSInteger)arg3 encodingOptions:(id)arg4 authorizationFilter:(id)arg5 ;
-(id)objectForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)orderedProperties;
-(void)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 ;
-(void)finish;


@end


#endif