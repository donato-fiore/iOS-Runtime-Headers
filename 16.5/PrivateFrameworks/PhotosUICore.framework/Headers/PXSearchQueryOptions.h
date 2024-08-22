// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHQUERYOPTIONS_H
#define PXSEARCHQUERYOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXSearchQueryOptions : NSObject <NSCopying>



@property (nonatomic) NSUInteger curatedAssetLimit; // ivar: _curatedAssetLimit
@property (nonatomic) NSUInteger filterOptions; // ivar: _filterOptions
@property (nonatomic) NSUInteger libraryScope; // ivar: _libraryScope
@property (nonatomic) NSUInteger suggestionLimit; // ivar: _suggestionLimit
@property (nonatomic) BOOL wantsCuratedAssetsFetchResult; // ivar: _wantsCuratedAssetsFetchResult
@property (nonatomic) BOOL wantsLibraryChanges; // ivar: _wantsLibraryChanges
@property (nonatomic) BOOL wantsWordEmbeddings; // ivar: _wantsWordEmbeddings


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif