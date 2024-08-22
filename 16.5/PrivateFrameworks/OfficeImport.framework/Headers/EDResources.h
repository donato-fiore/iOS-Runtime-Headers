// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDRESOURCES_H
#define EDRESOURCES_H


#import <Foundation/Foundation.h>

#import "EDCollection.h"
#import "EDContentFormatsCollection.h"
#import "EDFontsCollection.h"
#import "EDStylesCollection.h"
#import "EDColorsCollection.h"
#import "EDLinksCollection.h"
#import "EDTableStylesCollection.h"

@interface EDResources : NSObject {
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}




-(id)alignmentInfos;
-(id)border;
-(id)borders;
-(id)colors;
-(id)contentFormats;
-(id)description;
-(id)differentialStyles;
-(id)fills;
-(id)fonts;
-(id)initWithStringOptimization:(BOOL)arg0 ;
-(id)links;
-(id)names;
-(id)strings;
-(id)styles;
-(id)tableStyles;
-(id)themes;
-(void)setColors:(id)arg0 ;
-(void)setThemes:(id)arg0 ;


@end


#endif