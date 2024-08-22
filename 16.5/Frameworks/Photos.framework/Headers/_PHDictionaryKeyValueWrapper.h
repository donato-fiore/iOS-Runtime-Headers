// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PHDICTIONARYKEYVALUEWRAPPER_H
#define _PHDICTIONARYKEYVALUEWRAPPER_H

@class NSDictionary, NSMutableSet, NSSet, NSManagedObjectID;

#import <Foundation/Foundation.h>


@interface _PHDictionaryKeyValueWrapper : NSObject {
    NSDictionary *_fetchedPropertyNamesByEntityName;
    NSMutableSet *_missingPropertyNames;
}


@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSSet *missingPropertyNames;
@property (readonly, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID


-(id)description;
-(id)initWithFetchedPropertyNamesByEntityName:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;


@end


#endif