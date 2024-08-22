// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRECORD_H
#define WFRECORD_H

@class NSSet, NSDictionary, NSMutableSet, NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WFRecord : NSObject <NSCopying>



@property (readonly, nonatomic) NSSet *allProperties;
@property (readonly, nonatomic) NSDictionary *allPropertiesByName; // ivar: _allPropertiesByName
@property (readonly, nonatomic) NSSet *fetchedProperties;
@property (readonly, nonatomic) NSMutableSet *fetchedPropertyNames; // ivar: _fetchedPropertyNames
@property (readonly, nonatomic) NSMutableDictionary *lastFetchedValues; // ivar: _lastFetchedValues
@property (readonly, nonatomic) NSMutableDictionary *lastSavedOrFetchedValues; // ivar: _lastSavedOrFetchedValues
@property (readonly, nonatomic) NSSet *modifiedProperties;
@property (readonly, nonatomic) NSSet *modifiedPropertiesSinceLastSave;
@property (readonly, nonatomic) NSMutableSet *modifiedPropertyNames; // ivar: _modifiedPropertyNames
@property (readonly, nonatomic) NSMutableSet *modifiedPropertyNamesSinceLastSave; // ivar: _modifiedPropertyNamesSinceLastSave
@property (copy, nonatomic) NSString *storageIdentifier; // ivar: _storageIdentifier


+(id)defaultPropertyValues;
+(id)ignoredPropertyNames;
+(id)propertiesForClass:(Class)arg0 ;
+(id)propertiesForClass:(Class)arg0 walkingSuperclassesUntilReaching:(Class)arg1 ;
+(id)recordSubclassProperties;
-(BOOL)saveChangesToStorage:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveProperties:(id)arg0 toStorage:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeToStorage:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithValues:(BOOL)arg0 ;
-(id)init;
-(id)initWithStorage:(id)arg0 ;
-(id)initWithStorage:(id)arg0 properties:(id)arg1 ;
-(void)dealloc;
-(void)enumerateSettablePropertiesWithBlock:(id)arg0 ;
-(void)loadFromStorage:(id)arg0 ;
-(void)loadFromStorage:(id)arg0 properties:(id)arg1 ;
-(void)markPropertyModifiedIfNecessary:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resetModificationsForProperties:(id)arg0 onlySinceLastSave:(BOOL)arg1 ;
-(void)setupPropertyObservation;
-(void)tearDownPropertyObservation;


@end


#endif