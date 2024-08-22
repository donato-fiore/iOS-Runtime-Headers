// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KMMAPPER_SASYNCSIRIKITAPPVOCABULARY_H
#define KMMAPPER_SASYNCSIRIKITAPPVOCABULARY_H

@class NSDictionary, KVItemBuilder, NSString;
@protocol KMMapper;

#import <Foundation/Foundation.h>


@interface KMMapper_SASyncSiriKitAppVocabulary : NSObject <KMMapper>

 {
    NSDictionary *_ontologyNodeToFieldTypeMap;
    KVItemBuilder *_builder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)externalObjectClass;
-(NSInteger)targetItemType;
-(id)init;
-(id)itemsFromExternalObject:(id)arg0 additionalFields:(id)arg1 error:(*id)arg2 ;


@end


#endif