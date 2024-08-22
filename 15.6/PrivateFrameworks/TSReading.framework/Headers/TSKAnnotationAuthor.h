// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKANNOTATIONAUTHOR_H
#define TSKANNOTATIONAUTHOR_H

@class NSString, TSUColor;


#import "TSPObject.h"

@interface TSKAnnotationAuthor : TSPObject {
    NSString *mName;
    TSUColor *mColor;
}


@property (readonly, nonatomic) TSUColor *cellViolatorColor;
@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (readonly, nonatomic) TSUColor *flagFillColor;
@property (readonly, nonatomic) TSUColor *flagPressedColor;
@property (readonly, nonatomic) TSUColor *flagStrokeColor;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) TSUColor *popoverColor;
@property (retain, nonatomic) TSUColor *storageColor;
@property (readonly, nonatomic) TSUColor *textHighlightColor;
@property (readonly, nonatomic) TSUColor *textMarkupColor;


+(NSUInteger)presetColorCount;
+(id)authorCellViolatorColorForIndex:(NSUInteger)arg0 ;
+(id)authorChangeAdornmentsColorForIndex:(NSUInteger)arg0 ;
+(id)authorColorAppearanceNameForIndex:(NSUInteger)arg0 ;
+(id)authorColorNameForIndex:(NSUInteger)arg0 ;
+(id)authorFlagFillColorForIndex:(NSUInteger)arg0 ;
+(id)authorFlagPressedColorForIndex:(NSUInteger)arg0 ;
+(id)authorFlagStrokeColorForIndex:(NSUInteger)arg0 ;
+(id)authorPopoverColorForIndex:(NSUInteger)arg0 ;
+(id)authorStorageColorForIndex:(NSUInteger)arg0 ;
+(id)authorTextHighlightColorForIndex:(NSUInteger)arg0 ;
+(id)authorTextMarkupColorForIndex:(NSUInteger)arg0 ;
+(id)defaultAuthorName;
-(BOOL)allowsImplicitComponentOwnership;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)p_authorColorIndex;
-(id)componentRootObject;
-(id)description;
-(id)initWithContext:(id)arg0 name:(id)arg1 color:(id)arg2 ;
-(void)dealloc;


@end


#endif