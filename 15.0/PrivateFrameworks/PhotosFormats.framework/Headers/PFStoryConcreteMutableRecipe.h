// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTORYCONCRETEMUTABLERECIPE_H
#define PFSTORYCONCRETEMUTABLERECIPE_H

@class NSArray, NSDictionary, NSString;
@protocol PFStoryMutableRecipe, PFStoryRecipeStyle, PFStoryRecipeSongAsset;


#import "PFStoryConcreteRecipe.h"

@interface PFStoryConcreteMutableRecipe : PFStoryConcreteRecipe <PFStoryMutableRecipe>



@property (copy, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSDictionary *autoEditDecisionLists;
@property (copy, nonatomic) NSString *contentIdentifier;
@property (copy, nonatomic) NSObject<PFStoryRecipeStyle> *currentStyle;
@property (readonly, copy, nonatomic) NSObject<PFStoryRecipeSongAsset> *currentStyleSongAsset;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (copy, nonatomic) NSArray *libraries;
@property (nonatomic) NSInteger majorVersion;
@property (nonatomic) NSInteger minorVersion;
@property (readonly, nonatomic) NSInteger numberOfAssets;
@property (readonly, nonatomic) NSInteger numberOfPresentations;
@property (nonatomic) ? overallDurationInfo;
@property (copy, nonatomic) NSArray *presentations;
@property (copy, nonatomic) NSDictionary *seedSongIdentifiersByCatalog;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addAsset:(id)arg0 ;
-(void)addLibrary:(id)arg0 ;
-(void)addPresentation:(id)arg0 ;
-(void)removeAssetWithIdentifier:(id)arg0 ;
-(void)removeLibraryWithKind:(NSInteger)arg0 ;
-(void)removePresentationWithIdentifier:(id)arg0 ;


@end


#endif