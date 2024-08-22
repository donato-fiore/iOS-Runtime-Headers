// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNTEMPLATESLIDE_H
#define KNTEMPLATESLIDE_H

@class NSString, NSArray;
@protocol TSKTransformableObject;


#import "KNAbstractSlide.h"
#import "KNClassicStylesheetRecord.h"

@interface KNTemplateSlide : KNAbstractSlide <TSKTransformableObject>

 {
    NSString *_name;
    CGRect _objectRect;
    NSArray *_bodyParagraphStyles;
    NSArray *_bodyListStyles;
    NSString *_thumbnailTextForTitlePlaceholder;
    NSString *_thumbnailTextForBodyPlaceholder;
    BOOL _slideObjectsLayerWithTemplate;
    BOOL _hasBug16580905;
    BOOL _calculatedHasBug16580905;
}


@property (copy, nonatomic) NSArray *bodyListStyles;
@property (copy, nonatomic) NSArray *bodyParagraphStyles;
@property (readonly, nonatomic) KNClassicStylesheetRecord *classicStylesheetRecord; // ivar: _classicStylesheetRecord
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) CGRect objectRect;
@property (nonatomic) BOOL slideObjectsLayerWithTemplate;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *thumbnailTextForBodyPlaceholder;
@property (copy, nonatomic) NSString *thumbnailTextForTitlePlaceholder;


+(BOOL)hasLocalizedThumbnailText;
+(id)masterGuideColor;
+(id)p_defaultTemplateGuideColor;
+(void)initialize;
+(void)setMasterGuideColor:(id)arg0 ;
+(void)templatesNotEquivalentWithFile:(id)arg0 lineNumber:(NSInteger)arg1 reason:(id)arg2 ;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)hasBug16580905;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 ;
-(BOOL)isMaster;
-(BOOL)isObjectVisible;
-(BOOL)isTemplateSlide;
-(BOOL)isThemeContent;
-(BOOL)supportsBuilds;
-(NSUInteger)buildChunkCount;
-(NSUInteger)buildCount;
-(id)buildChunks;
-(id)builds;
-(id)childEnumerator;
-(id)defaultTagForDrawable:(id)arg0 ;
-(id)imagePlaceholders;
-(id)initWithSlideNode:(id)arg0 context:(id)arg1 ;
-(id)nonPlaceholderObjects;
-(id)objectForProperty:(int)arg0 ;
-(id)p_defaultThumbnailTextForPlaceholder:(id)arg0 ;
-(id)packageLocator;
-(id)referencedStyles;
-(id)tagsForNewPlaceholderInfos:(id)arg0 ;
-(id)thumbnailTextForPlaceholder:(id)arg0 ;
-(id)unusedPlaceholderTagBasedOnTag:(id)arg0 ;
-(int)intValueForProperty:(int)arg0 ;
-(void)acceptVisitor:(id)arg0 ;
-(void)addBuild:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)flushClassicStylesheetRecord;
-(void)generateObjectPlaceholderIfNecessary;
-(void)insertBuildChunk:(id)arg0 afterChunk:(id)arg1 generateIdentifier:(BOOL)arg2 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeBuild:(id)arg0 ;
-(void)removeBuildChunk:(id)arg0 rollbackGeneratedIdentifier:(BOOL)arg1 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)updatePlaceholderText;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasAddedToTheme:(id)arg0 ;
-(void)willBeAddedToTheme:(id)arg0 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif