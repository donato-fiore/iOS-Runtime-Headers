// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3EXPORTITEM_H
#define ML3EXPORTITEM_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"

@interface ML3ExportItem : NSObject {
    NSDictionary *_properties;
}


@property (readonly, nonatomic) Class entityClass; // ivar: _entityClass
@property (readonly, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSInteger persistentId; // ivar: _persistentId


+(*unsigned int)allExportPropertyKeysForEntityClass:(Class)arg0 returnedCount:(*unsigned int)arg1 ;
-(*unsigned int)propertyKeysToExport:(*unsigned int)arg0 ;
-(BOOL)hasValueForProperty:(unsigned int)arg0 ;
-(BOOL)isValid;
-(NSInteger)longlongValueForProperty:(unsigned int)arg0 ;
-(char)charValueForProperty:(unsigned int)arg0 ;
-(id)_allExportPropertyNames;
-(id)_propertyNameForKey:(unsigned int)arg0 ;
-(id)_propertyNamesFromKeys:(*unsigned int)arg0 numKeys:(unsigned int)arg1 ;
-(id)dataValueForProperty:(unsigned int)arg0 ;
-(id)description;
-(id)exportData;
-(id)initWithPersistentId:(NSInteger)arg0 entityClass:(Class)arg1 library:(id)arg2 ;
-(id)initWithPersistentId:(NSInteger)arg0 entityClass:(Class)arg1 propertyKeysToExport:(*unsigned int)arg2 numKeys:(unsigned int)arg3 library:(id)arg4 ;
-(id)initWithPersistentId:(NSInteger)arg0 entityClass:(id)arg1 properties:(id)arg2 library:(id)arg3 ;
-(id)stringValueForProperty:(unsigned int)arg0 ;
-(id)valueForProperty:(unsigned int)arg0 ;
-(int)longValueForProperty:(unsigned int)arg0 ;
-(short)shortValueForProperty:(unsigned int)arg0 ;


@end


#endif