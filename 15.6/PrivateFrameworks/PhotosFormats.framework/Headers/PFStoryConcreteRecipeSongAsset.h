// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFSTORYCONCRETERECIPESONGASSET_H
#define PFSTORYCONCRETERECIPESONGASSET_H

@class NSString, NSURL;
@protocol PFStoryRecipeMutableSongAsset;


#import "PFStoryConcreteRecipeAsset.h"

@interface PFStoryConcreteRecipeSongAsset : PFStoryConcreteRecipeAsset <PFStoryRecipeMutableSongAsset>



@property (readonly, nonatomic) NSString *catalog; // ivar: _catalog
@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (retain, nonatomic) NSString *colorGradeCategory; // ivar: _colorGradeCategory
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSInteger kind;
@property (readonly, nonatomic) NSString *songID; // ivar: _songID
@property (readonly, nonatomic) NSInteger subcategory; // ivar: _subcategory
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url;


+(BOOL)decomposeURL:(id)arg0 usingBlock:(id)arg1 ;
+(id)URLWithCatalog:(id)arg0 songID:(id)arg1 ;
-(BOOL)isEqualToAsset:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 category:(NSInteger)arg1 subcategory:(NSInteger)arg2 catalog:(id)arg3 songID:(id)arg4 title:(id)arg5 subtitle:(id)arg6 ;
-(id)initWithIdentifier:(id)arg0 kind:(NSInteger)arg1 url:(id)arg2 ;


@end


#endif