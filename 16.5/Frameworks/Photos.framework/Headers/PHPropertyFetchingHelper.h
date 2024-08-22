// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPROPERTYFETCHINGHELPER_H
#define PHPROPERTYFETCHINGHELPER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "_PHDictionaryKeyValueWrapper.h"
#import "PHPhotoLibrary.h"

@interface PHPropertyFetchingHelper : NSObject {
    NSDictionary *_fetchedPropertyNamesByEntityName;
    NSDictionary *_propertyValuesByOID;
    os_unfair_lock_s _lock;
    _PHDictionaryKeyValueWrapper *_lock_dictionaryWrapper;
}


@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(id)fetchPropertiesForObjectIDs:(id)arg0 propertyNamesByEntityName:(id)arg1 photoLibrary:(id)arg2 ;
-(BOOL)evaluateQuery:(id)arg0 withObjectID:(id)arg1 outMissingPropertyNames:(*id)arg2 ;
-(id)fetchedPropertiesForObjectID:(id)arg0 ;
-(id)init;
-(id)initWithObjectIDs:(id)arg0 propertyNamesByEntityName:(id)arg1 photoLibrary:(id)arg2 ;


@end


#endif