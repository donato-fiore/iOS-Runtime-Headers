// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFSTORYCONCRETERECIPE_H
#define PFSTORYCONCRETERECIPE_H

@class NSString, NSArray, NSDictionary;
@protocol PFStoryRecipe, PFStoryRecipeStyle, PFStoryRecipeSongAsset;

#import <Foundation/Foundation.h>


@interface PFStoryConcreteRecipe : NSObject <PFStoryRecipe>

 {
    NSString *_currentStyleIdentifier;
}


@property (readonly, copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSDictionary *autoEditDecisionLists; // ivar: _autoEditDecisionLists
@property (readonly, copy, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, copy, nonatomic) NSObject<PFStoryRecipeStyle> *currentStyle; // ivar: _currentStyle
@property (readonly, copy, nonatomic) NSObject<PFStoryRecipeSongAsset> *currentStyleSongAsset;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, copy, nonatomic) NSArray *libraries; // ivar: _libraries
@property (readonly, nonatomic) NSInteger majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) NSInteger minorVersion; // ivar: _minorVersion
@property (readonly, nonatomic) NSInteger numberOfAssets;
@property (readonly, nonatomic) NSInteger numberOfPresentations;
@property (readonly, nonatomic) ? overallDurationInfo; // ivar: _overallDurationInfo
@property (readonly, copy, nonatomic) NSArray *presentations; // ivar: _presentations
@property (readonly, copy, nonatomic) NSDictionary *seedSongIdentifiersByCatalog; // ivar: _seedSongIdentifiersByCatalog


-(BOOL)_isArray:(id)arg0 equalToArray:(id)arg1 usingObjectEquality:(id)arg2 ;
-(BOOL)_isDictionary:(id)arg0 equalToDictionary:(id)arg1 usingObjectEquality:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecipe:(id)arg0 ;
-(id)assetAtIndex:(NSInteger)arg0 ;
-(id)assetWithKind:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContentIdentifier:(id)arg0 majorVersion:(NSInteger)arg1 minorVersion:(NSInteger)arg2 libraries:(id)arg3 assets:(id)arg4 overallDurationInfo:(struct ? )arg5 currentStyle:(id)arg6 seedSongIdentifiersByCatalog:(id)arg7 autoDecisionLists:(id)arg8 presentations:(id)arg9 ;
-(id)libraryWithKind:(NSInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)presentationAtIndex:(NSInteger)arg0 ;
-(id)seedSongAssetForCatalog:(id)arg0 ;
-(void)enumerateAssetsWithKind:(NSInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif