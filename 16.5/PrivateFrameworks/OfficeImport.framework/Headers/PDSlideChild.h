// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDSLIDECHILD_H
#define PDSLIDECHILD_H



#import "PDSlideBase.h"
#import "OADThemeOverrides.h"
#import "OADColorMap.h"

@interface PDSlideChild : PDSlideBase {
    BOOL mShowMasterPlaceholderAnimations;
    BOOL mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}




-(BOOL)showMasterPlaceholderAnimations;
-(BOOL)showMasterShapes;
-(id)colorMap;
-(id)colorMapOverride;
-(id)colorScheme;
-(id)defaultTextListStyle;
-(id)description;
-(id)drawingTheme;
-(id)fontScheme;
-(id)init;
-(id)styleMatrix;
-(id)themeOverrides;
-(void)doneWithContent;
-(void)setColorMapOverride:(id)arg0 ;
-(void)setShowMasterPlaceholderAnimations:(BOOL)arg0 ;
-(void)setShowMasterShapes:(BOOL)arg0 ;


@end


#endif