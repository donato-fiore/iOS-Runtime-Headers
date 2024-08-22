// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSSTORAGEDATABASE_H
#define AMSSTORAGEDATABASE_H

@class NSString;
@protocol AMSSQLiteConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSSQLiteConnection.h"

@interface AMSStorageDatabase : NSObject <AMSSQLiteConnectionDelegate>



@property (retain, nonatomic) AMSSQLiteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (nonatomic) NSInteger keepAliveCount; // ivar: _keepAliveCount
@property (readonly) Class superclass;


+(BOOL)isFeatureSupported;
+(id)sharedDatabaseWithDomain:(id)arg0 ;
-(BOOL)_setValueData:(id)arg0 valueType:(NSInteger)arg1 forKey:(id)arg2 error:(*id)arg3 ;
-(BOOL)booleanForKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)connectionNeedsResetForCorruption:(id)arg0 ;
-(BOOL)deleteForKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)setBoolean:(BOOL)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setDouble:(CGFloat)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setInteger:(NSInteger)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(CGFloat)doubleForKey:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_valueTypeForValue:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 error:(*id)arg1 ;
-(id)_allKeysPrefixedByDomainWithError:(*id)arg0 ;
-(id)_cachePath;
-(id)_convertToDataWithValue:(id)arg0 valueType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)_convertToValueWithData:(id)arg0 valueType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)_dataForPlistValue:(id)arg0 error:(*id)arg1 ;
-(id)_plistValueForData:(id)arg0 error:(*id)arg1 ;
-(id)allKeyValuesWithError:(*id)arg0 ;
-(id)allKeysForDomain:(id)arg0 withError:(*id)arg1 ;
-(id)initWithDomain:(id)arg0 ;
-(id)sizeWithError:(*id)arg0 ;
-(id)valueForKey:(id)arg0 error:(*id)arg1 ;
-(void)_performTransaction:(id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif