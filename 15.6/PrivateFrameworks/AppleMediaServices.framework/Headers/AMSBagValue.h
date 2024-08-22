// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSBAGVALUE_H
#define AMSBAGVALUE_H

@class ACAccount, NSString, NSArray;
@protocol AMSBagDataSourceProtocol;

#import <Foundation/Foundation.h>


@interface AMSBagValue : NSObject

@property (copy, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic) optional<AMSCore::Bag> bag; // ivar: _bag
@property (weak, nonatomic) NSObject<AMSBagDataSourceProtocol> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (retain, nonatomic) NSArray *transformBlocks; // ivar: _transformBlocks
@property (nonatomic) NSUInteger valueType; // ivar: _valueType


+(BOOL)_value:(id)arg0 isKindOfValueType:(NSUInteger)arg1 ;
+(id)_NSErrorFromError:(*void)arg0 ;
+(id)_valueFromDictionary:(id)arg0 forBagKey:(id)arg1 ;
+(id)bagValueWithKey:(id)arg0 valueType:(NSUInteger)arg1 valuePromise:(id)arg2 ;
+(id)failingBagValueWithKey:(id)arg0 valueType:(NSUInteger)arg1 error:(id)arg2 ;
+(id)frozenBagValueWithKey:(id)arg0 value:(id)arg1 valueType:(NSUInteger)arg2 ;
+(id)globalBagValueStorage;
-(id)_processedDefaultValue:(id)arg0 ;
-(id)initWithBag:(struct Bag )arg0 key:(id)arg1 valueType:(NSUInteger)arg2 account:(id)arg3 ;
-(id)initWithDataSource:(id)arg0 key:(id)arg1 valueType:(NSUInteger)arg2 ;
-(id)initWithDataSource:(id)arg0 key:(id)arg1 valueType:(NSUInteger)arg2 account:(id)arg3 ;
-(id)transformWithBlock:(id)arg0 ;
-(id)valuePromise;
-(id)valueWithError:(*id)arg0 ;
-(void)_applyTransformsToValue:(id)arg0 index:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_handleFailureWithError:(*void)arg0 completion:(id)arg1 ;
-(void)_handleSuccessWithValue:(id)arg0 isDefault:(BOOL)arg1 completion:(id)arg2 ;
-(void)valueWithCompletion:(id)arg0 ;


@end


#endif