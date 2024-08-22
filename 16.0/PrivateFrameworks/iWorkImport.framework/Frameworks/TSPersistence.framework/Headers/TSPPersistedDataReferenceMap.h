// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPPERSISTEDDATAREFERENCEMAP_H
#define TSPPERSISTEDDATAREFERENCEMAP_H

@class NSIndexSet, NSString;
@protocol TSPObjectInDocumentContaining;

#import <Foundation/Foundation.h>

#import "_TtC13TSPersistence15TSPReferenceMap.h"

@interface TSPPersistedDataReferenceMap : NSObject <TSPObjectInDocumentContaining>

 {
    _TtC13TSPersistence15TSPReferenceMap *_dataToObjectReferenceMap;
    *void _objectToDataReferenceMap;
    NSIndexSet *_objectIdentifiersInDocument;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAnyObjectIdentifierInDocument:(id)arg0 ;
-(BOOL)isObjectIdentifierInDocument:(NSInteger)arg0 ;
-(id)allReferencesFromDataIdentifier:(NSInteger)arg0 ;
-(id)allReferencesFromObjectIdentifier:(NSInteger)arg0 ;
-(id)init;
-(id)initWithComponentDataReferenceInfoDictionary:(id)arg0 dataCount:(NSUInteger)arg1 objectCount:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)enumerateDataReferencesUsingBlock:(id)arg0 ;


@end


#endif