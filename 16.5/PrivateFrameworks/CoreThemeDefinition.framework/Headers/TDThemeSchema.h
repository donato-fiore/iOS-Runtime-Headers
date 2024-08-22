// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDTHEMESCHEMA_H
#define TDTHEMESCHEMA_H


#import <Foundation/Foundation.h>

#import "CoreThemeDocument.h"

@interface TDThemeSchema : NSObject {
    CoreThemeDocument *_doc;
}




+(BOOL)loadThemeConstantsForEntity:(id)arg0 inContext:(id)arg1 ;
-(BOOL)_renditionKey:(struct _renditionkeytoken *)arg0 isEqualToKeyIgnoringLook:(struct _renditionkeytoken *)arg1 ;
-(id)initWithThemeDocument:(id)arg0 ;
-(void)_addSchemaPartDefinitionsForStandardElement:(struct ? *)arg0 withElement:(id)arg1 ;
-(void)_loadConstantForEntity:(id)arg0 withDescriptor:(struct _themeconstant *)arg1 ;
-(void)_sanityCheckColorNamesAndUpdateIfNecessary;
-(void)_sanityCheckEffectRenditionsAndUpdateIfNecessary;
-(void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
-(void)_sanityCheckMicaRenditionsAndUpdateIfNecessary;
-(void)_sanityCheckObjectsWithEntityName:(id)arg0 globalDescriptor:(*void)arg1 matchIdentifierOnly:(BOOL)arg2 ;
-(void)_sanityCheckSchemaAssets;
-(void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
-(void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
-(void)_sanityCheckSchemaPartDefinitionsForStandardElement:(struct ? *)arg0 withElement:(id)arg1 ;
-(void)dealloc;
-(void)loadBasicThemePart;
-(void)loadColorNames;
-(void)loadColorStatuses;
-(void)loadEffectConstants;
-(void)loadGlyphSizeConstants;
-(void)loadGlyphWeightConstants;
-(void)loadIterationTypes;
-(void)loadMetafontSelectors;
-(void)loadMetafontSizes;
-(void)loadRenditionSubtypes;
-(void)loadRenditionTypes;
-(void)loadSchemaCategories;
-(void)loadSchemaDefinitions;
-(void)loadStandardEffectDefinitions;
-(void)loadTemplateRenderingModeConstants;
-(void)loadTexturePixelFormats;
-(void)loadThemeCompressionTypes;
-(void)loadThemeDeploymentTargets;
-(void)loadThemeDirections;
-(void)loadThemeDisplayGamuts;
-(void)loadThemeDrawingLayers;
-(void)loadThemeElements;
-(void)loadThemeGraphicsFeatureSetClasses;
-(void)loadThemeIdioms;
-(void)loadThemeParts;
-(void)loadThemePresentationStates;
-(void)loadThemeSizes;
-(void)loadThemeStates;
-(void)loadThemeTextureFaces;
-(void)loadThemeTextureInterpretations;
-(void)loadThemeUISizeClasses;
-(void)loadThemeValues;
-(void)loadVectorGlyphRenderingModeConstants;
-(void)resetThemeConstants;
-(void)sanityCheckAndUpdateDocumentIfNecessary;


@end


#endif