// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCOLLECTIONLISTREFERENCE_H
#define PHCOLLECTIONLISTREFERENCE_H

@class NSArray;


#import "PHCollectionReference.h"

@interface PHCollectionListReference : PHCollectionReference

@property (readonly, nonatomic) NSInteger collectionListSubtype; // ivar: _collectionListSubtype
@property (readonly, nonatomic) NSInteger collectionListType; // ivar: _collectionListType
@property (readonly, copy, nonatomic) NSArray *transientCollectionReferences; // ivar: _transientCollectionReferences


+(id)referenceForCollectionList:(id)arg0 ;
+(id)representedType;
-(BOOL)transient;
-(id)_transientCollectionInLibrary:(id)arg0 ;
-(id)dictionaryForReferenceType:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 referenceType:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg0 libraryURL:(id)arg1 collectionListType:(NSInteger)arg2 collectionListSubtype:(NSInteger)arg3 ;
-(id)initWithLocalIdentifier:(id)arg0 libraryURL:(id)arg1 collectionListType:(NSInteger)arg2 collectionListSubtype:(NSInteger)arg3 collectionReferences:(id)arg4 transientIdentifier:(id)arg5 transientTitle:(id)arg6 ;


@end


#endif