// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKKEYVALUEDOMAIN_H
#define HKKEYVALUEDOMAIN_H

@class NSUUID, NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"
#import "HKHealthStore.h"

@interface HKKeyValueDomain : NSObject <_HKXPCExportable>

 {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domainName; // ivar: _domainName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)healthAppDefaultsDomainWithHealthStore:(id)arg0 ;
+(id)healthArticlesDefaultsDomainWithHealthStore:(id)arg0 ;
+(id)heartRhythmDefaultsDomainWithHealthStore:(id)arg0 ;
+(id)safetyDefaultsDomainWithHealthStore:(id)arg0 ;
+(id)serverInterface;
-(BOOL)setData:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setDate:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setNumber:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setPropertyListValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setString:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)_dataFromPropertyListValue:(id)arg0 error:(*id)arg1 ;
-(id)_dataWithErrorNoDataForKey:(id)arg0 error:(*id)arg1 ;
-(id)_dateWithErrorNoDataForKey:(id)arg0 error:(*id)arg1 ;
-(id)_numberWithErrorNoDataForKey:(id)arg0 error:(*id)arg1 ;
-(id)_propertyListValueFromData:(id)arg0 error:(*id)arg1 ;
-(id)_propertyListValueWithErrorNoDataForKey:(id)arg0 error:(*id)arg1 ;
-(id)_stringWithErrorNoDataForKey:(id)arg0 error:(*id)arg1 ;
-(id)dataForKey:(id)arg0 error:(*id)arg1 ;
-(id)dateForKey:(id)arg0 error:(*id)arg1 ;
-(id)exportedInterface;
-(id)initWithCategory:(NSInteger)arg0 domainName:(id)arg1 healthStore:(id)arg2 ;
-(id)numberForKey:(id)arg0 error:(*id)arg1 ;
-(id)propertyListValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)remoteInterface;
-(id)stringForKey:(id)arg0 error:(*id)arg1 ;
-(void)allValuesWithCompletion:(id)arg0 ;
-(void)connectionInvalidated;
-(void)dataForKey:(id)arg0 completion:(id)arg1 ;
-(void)dateForKey:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)numberForKey:(id)arg0 completion:(id)arg1 ;
-(void)propertyListValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)removeValuesForKeys:(id)arg0 completion:(id)arg1 ;
-(void)setData:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setDate:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setPropertyListValue:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setString:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setValueForAllKeys:(id)arg0 completion:(id)arg1 ;
-(void)setValuesWithDictionary:(id)arg0 completion:(id)arg1 ;
-(void)stringForKey:(id)arg0 completion:(id)arg1 ;


@end


#endif