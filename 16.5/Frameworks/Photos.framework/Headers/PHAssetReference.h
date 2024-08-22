// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETREFERENCE_H
#define PHASSETREFERENCE_H



#import "PHObjectReference.h"

@interface PHAssetReference : PHObjectReference

@property (readonly, nonatomic) NSUInteger mediaSubtypes; // ivar: _mediaSubtypes
@property (readonly, nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSUInteger sourceType; // ivar: _sourceType
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed; // ivar: _trashed


+(id)referenceForAsset:(id)arg0 ;
+(id)representedType;
-(id)dictionaryForReferenceType:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 referenceType:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg0 libraryURL:(id)arg1 mediaType:(NSInteger)arg2 subtypes:(NSUInteger)arg3 sourceType:(NSUInteger)arg4 isTrashed:(BOOL)arg5 ;


@end


#endif