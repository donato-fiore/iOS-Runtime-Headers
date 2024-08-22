// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHOBJECTPLADAPTER_H
#define PHOBJECTPLADAPTER_H

@class PLManagedObject, NSString, NSMutableOrderedSet, NSMutableDictionary;
@protocol PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHObjectPLAdapter : NSObject <PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing>



@property (readonly, nonatomic) PLManagedObject *backingManagedObject; // ivar: _backingManagedObject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableOrderedSet *ignoredKeys; // ivar: _ignoredKeys
@property (retain, nonatomic) NSMutableDictionary *modifiedKeyValues; // ivar: _modifiedKeyValues
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


-(id)initWithPLManagedObject:(id)arg0 photoLibrary:(id)arg1 ;
-(id)mutableAccessingCopy;
-(id)newObjectWithPropertySets:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif