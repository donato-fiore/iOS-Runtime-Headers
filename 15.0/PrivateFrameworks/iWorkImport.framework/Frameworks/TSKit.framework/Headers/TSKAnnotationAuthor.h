// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKANNOTATIONAUTHOR_H
#define TSKANNOTATIONAUTHOR_H

@class TSPObject, TSUColor, NSString;
@protocol TSPCopying;



@interface TSKAnnotationAuthor : TSPObject <TSPCopying>

 {
    TSUColor *mColor;
}


@property (readonly, nonatomic) NSString *authorColorName;
@property (readonly, nonatomic) TSUColor *cellViolatorColor;
@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) TSUColor *flagFillColor;
@property (readonly, nonatomic) TSUColor *flagPressedColor;
@property (readonly, nonatomic) TSUColor *flagStrokeColor;
@property (readonly, nonatomic) TSUColor *gradientEndColor;
@property (readonly, nonatomic) TSUColor *gradientStartColor;
@property (readonly, nonatomic) BOOL hasPublicID;
@property (readonly, nonatomic) TSUColor *indicatorDarkColor;
@property (readonly, nonatomic) TSUColor *indicatorLightColor;
@property (nonatomic) BOOL isPublicAuthor; // ivar: _isPublicAuthor
@property (readonly, nonatomic) NSString *menuSwatchColorForAuthor;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) TSUColor *popoverAuthorLabelColor;
@property (readonly, nonatomic) TSUColor *popoverButtonTintColor;
@property (readonly, nonatomic) TSUColor *popoverColor;
@property (copy, nonatomic) NSString *publicID; // ivar: _publicID
@property (readonly, nonatomic) BOOL showAuthorComments;
@property (readonly, nonatomic) TSUColor *sidebarChangeBarColor;
@property (readonly, nonatomic) TSUColor *sidebarDecoratorLineColor;
@property (readonly, nonatomic) TSUColor *sidebarHoverColor;
@property (readonly, nonatomic) TSUColor *sidebarSelectedBorderColor;
@property (readonly, nonatomic) TSUColor *sidebarSelectedColor;
@property (readonly, nonatomic) TSUColor *sidebarUsernameColor;
@property (retain, nonatomic) TSUColor *storageColor;
@property (readonly, nonatomic) TSUColor *textHighlightColor;
@property (readonly, nonatomic) TSUColor *textHighlightOverlappingDuplicateColor;
@property (readonly, nonatomic) TSUColor *textMarkupColor;


+(NSUInteger)authorColorIndexClosestToImportedFloatingCommentColor:(id)arg0 ;
+(NSUInteger)p_authorColorIndexWithColor:(id)arg0 forIndicator:(BOOL)arg1 ;
+(NSUInteger)presetColorCount;
+(id)authorColorForIndex:(NSUInteger)arg0 forKey:(id)arg1 ;
+(id)authorMenuSwatchColorForIndex:(NSUInteger)arg0 ;
+(id)authorNameExplanatoryStringWithUseExplanation:(BOOL)arg0 withSettingsExplanation:(BOOL)arg1 ;
+(id)authorStorageColorForIndex:(NSUInteger)arg0 ;
+(id)authorTextMarkupColorForIndex:(NSUInteger)arg0 ;
+(id)defaultAuthorName;
+(id)indicatorDarkColorByLightColor:(id)arg0 ;
+(id)indicatorDarkColorForIndex:(NSUInteger)arg0 ;
+(id)indicatorLightColorByAuthorColor:(id)arg0 ;
+(id)indicatorLightColorForIndex:(NSUInteger)arg0 ;
+(id)localizedAuthorColorNameForIndex:(NSUInteger)arg0 ;
+(id)normalizedAuthorNameForAuthorName:(id)arg0 ;
+(id)p_authorColorDictionaryForAuthorIndex:(NSUInteger)arg0 ;
+(id)p_publicIDFromSeed:(id)arg0 privateID:(id)arg1 ;
+(void)enumerateAnnotationsInDocument:(id)arg0 withAuthor:(id)arg1 usingHitBlock:(id)arg2 ;
-(BOOL)allowsImplicitComponentOwnership;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPreferredOver:(id)arg0 ;
-(BOOL)matchesAuthor:(id)arg0 ;
-(BOOL)matchesPrivateID:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)p_authorColorIndex;
-(id)componentRootObject;
-(id)copyWithContext:(id)arg0 ;
-(id)description;
-(id)initWithContext:(id)arg0 name:(id)arg1 color:(id)arg2 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 color:(id)arg2 privateID:(id)arg3 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 color:(id)arg2 publicID:(id)arg3 isPublicAuthor:(BOOL)arg4 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif