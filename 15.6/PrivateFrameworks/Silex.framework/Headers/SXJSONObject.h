// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXJSONOBJECT_H
#define SXJSONOBJECT_H

@class NSDictionary, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SXJSONObject : NSObject

@property (readonly, nonatomic) NSDictionary *jsonDictionary; // ivar: _jsonDictionary
@property (readonly, nonatomic) NSMutableDictionary *objectStorage; // ivar: _objectStorage
@property (readonly, nonatomic) NSString *specificationVersion; // ivar: _specificationVersion
@property (readonly, nonatomic) os_unfair_lock_s unfairLock; // ivar: _unfairLock


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;
+(Class)classOverrideAtInitialization:(Class)arg0 type:(id)arg1 ;
+(id)jsonPropertyNameForObjCPropertyName:(id)arg0 ;
+(id)objectValueClassBlockForPropertyWithName:(SEL)arg0 ;
+(id)propertyDefinitions;
+(id)propertyHashTable;
+(id)protocolPropertyDefinitions;
+(id)purgeClassBlockForPropertyWithName:(SEL)arg0 ;
+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
+(void)initialize;
+(void)lock;
+(void)unlock;
-(BOOL)isEqual:(id)arg0 ;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithJSONData:(id)arg0 andVersion:(id)arg1 ;
-(id)initWithJSONObject:(id)arg0 andVersion:(id)arg1 ;
-(id)jsonData;
-(id)valueForLookupKey:(id)arg0 ;
-(void)storeObject:(id)arg0 forLookupKey:(id)arg1 ;
-(void)storeValue:(id)arg0 forLookupKey:(id)arg1 ;


@end


#endif