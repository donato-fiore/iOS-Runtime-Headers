// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHRELATEDCOLLECTION_H
#define PHRELATEDCOLLECTION_H

@class NSArray, NSString;


#import "PHAssetCollection.h"
#import "PHObject.h"

@interface PHRelatedCollection : PHAssetCollection {
    NSInteger _titleCategory;
}


@property (readonly, nonatomic) NSArray *debugInfo; // ivar: _debugInfo
@property (readonly, copy, nonatomic) NSString *highlightLocalIdentifier; // ivar: _highlightLocalIdentifier
@property (readonly, nonatomic) NSArray *momentLocalIdentifiers; // ivar: _momentLocalIdentifiers
@property (readonly, nonatomic) PHObject *relatedObject; // ivar: _relatedObject
@property (readonly, nonatomic) NSUInteger relationType; // ivar: _relationType
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle


+(id)_relatedCollectionsFromInfos:(id)arg0 relatedObject:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_transientCollectionListWithCollectionsRelatedToLocalIdentifiers:(id)arg0 relationType:(NSUInteger)arg1 options:(id)arg2 photoLibrary:(id)arg3 ;
+(id)transientCollectionListWithCollectionsRelatedToObject:(id)arg0 relationType:(NSUInteger)arg1 options:(id)arg2 ;
+(id)transientCollectionListWithCollectionsRelatedToPersons:(id)arg0 relationType:(NSUInteger)arg1 options:(id)arg2 ;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(NSInteger)titleCategory;
-(id)initTransientWithAssets:(id)arg0 orFetchResult:(id)arg1 relationType:(NSUInteger)arg2 relatedObject:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleCategory:(NSInteger)arg6 highlightLocalIdentifier:(id)arg7 momentLocalIdentifiers:(id)arg8 debugInfo:(id)arg9 ;
-(id)localizedSubtitle;


@end


#endif