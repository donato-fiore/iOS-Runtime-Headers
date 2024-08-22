// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETCOLLECTIONREFERENCE_H
#define PHASSETCOLLECTIONREFERENCE_H

@class NSArray;


#import "PHCollectionReference.h"

@interface PHAssetCollectionReference : PHCollectionReference

@property (readonly, nonatomic) NSInteger assetCollectionSubtype; // ivar: _assetCollectionSubtype
@property (readonly, nonatomic) NSInteger assetCollectionType; // ivar: _assetCollectionType
@property (readonly, copy, nonatomic) NSArray *transientAssetReferences; // ivar: _transientAssetReferences


+(id)referenceForAssetCollection:(id)arg0 ;
+(id)representedType;
-(BOOL)transient;
-(id)_transientCollectionInLibrary:(id)arg0 ;
-(id)dictionaryForReferenceType:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 referenceType:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg0 libraryURL:(id)arg1 type:(NSInteger)arg2 subtype:(NSInteger)arg3 ;
-(id)initWithLocalIdentifier:(id)arg0 libraryURL:(id)arg1 type:(NSInteger)arg2 subtype:(NSInteger)arg3 assetReferences:(id)arg4 transientIdentifier:(id)arg5 transientTitle:(id)arg6 ;


@end


#endif