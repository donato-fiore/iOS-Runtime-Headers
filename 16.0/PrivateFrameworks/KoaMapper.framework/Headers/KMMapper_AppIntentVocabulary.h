// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KMMAPPER_APPINTENTVOCABULARY_H
#define KMMAPPER_APPINTENTVOCABULARY_H

@class KVItemBuilder, NSMutableArray, NSDictionary, NSString;
@protocol KMMapper;

#import <Foundation/Foundation.h>


@interface KMMapper_AppIntentVocabulary : NSObject <KMMapper>

 {
    KVItemBuilder *_builder;
    NSMutableArray *_items;
    NSDictionary *_intentSlotToFieldTypeMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)externalObjectClass;
-(BOOL)_addItemWithItemId:(id)arg0 fieldType:(NSInteger)arg1 values:(id)arg2 error:(*id)arg3 ;
-(NSInteger)targetItemType;
-(id)_resolveFieldTypeFromIntentSlotName:(id)arg0 ;
-(id)init;
-(id)itemsFromExternalObject:(id)arg0 additionalFields:(id)arg1 error:(*id)arg2 ;


@end


#endif