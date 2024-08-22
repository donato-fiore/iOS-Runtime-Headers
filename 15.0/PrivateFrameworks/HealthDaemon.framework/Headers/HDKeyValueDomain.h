// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDKEYVALUEDOMAIN_H
#define HDKEYVALUEDOMAIN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDKeyValueDomain : NSObject {
    HDProfile *_profile;
    Class _entityClass;
}


@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, nonatomic) NSString *domainName; // ivar: _domainName


+(id)healthAppUserDefaultsDomainWithProfile:(id)arg0 ;
-(BOOL)removeValuesForKeys:(id)arg0 error:(*id)arg1 ;
-(BOOL)setData:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setDate:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setNumber:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setPropertyListValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setQuantity:(id)arg0 unit:(id)arg1 forKey:(id)arg2 error:(*id)arg3 ;
-(BOOL)setString:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setValueForAllKeys:(id)arg0 error:(*id)arg1 ;
-(BOOL)setValuesWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)allValuesWithError:(*id)arg0 ;
-(id)dataForKey:(id)arg0 error:(*id)arg1 ;
-(id)dateForKey:(id)arg0 error:(*id)arg1 ;
-(id)initWithCategory:(NSInteger)arg0 domainName:(id)arg1 profile:(id)arg2 ;
-(id)modificationDatesForKeys:(id)arg0 error:(*id)arg1 ;
-(id)numberForKey:(id)arg0 error:(*id)arg1 ;
-(id)propertyListValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)quantityForKey:(id)arg0 unit:(id)arg1 error:(*id)arg2 ;
-(id)stringForKey:(id)arg0 error:(*id)arg1 ;
-(id)valuesForKeys:(id)arg0 error:(*id)arg1 ;


@end


#endif