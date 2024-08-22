// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDLEGEND_H
#define CHDLEGEND_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "OADGraphicProperties.h"
#import "EDCollection.h"
#import "EDResources.h"

@interface CHDLegend : NSObject {
    int mLegendPosition;
    OADGraphicProperties *mGraphicProperties;
    NSUInteger mFontIndex;
    EDCollection *mLegendEntries;
    EDResources *mResources;
    BOOL mIsVertical;
    BOOL mIsOverlay;
    NSArray *mLabelEffects;
}




-(BOOL)isAutoSizeAndPosition;
-(BOOL)isOverlay;
-(BOOL)isSingleColumnLegend;
-(NSUInteger)fontIndex;
-(id)description;
-(id)font;
-(id)graphicProperties;
-(id)initWithResources:(id)arg0 ;
-(id)labelEffects;
-(id)legendEntries;
-(int)legendPosition;
-(void)setFont:(id)arg0 ;
-(void)setFontIndex:(NSUInteger)arg0 ;
-(void)setGraphicProperties:(id)arg0 ;
-(void)setIsOverlay:(BOOL)arg0 ;
-(void)setIsSingleColumnLegend:(BOOL)arg0 ;
-(void)setLabelEffects:(id)arg0 ;
-(void)setLegendPosition:(int)arg0 ;


@end


#endif