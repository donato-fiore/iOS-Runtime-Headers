// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXTABLE_H
#define OAXTABLE_H


#import <Foundation/Foundation.h>


@interface OAXTable : NSObject



+(?)readCellBorderStyledrawingState;
+(?)readCellFromXmlNode:(?)arg0 toCelldrawingState;
+(?)readCellPropertiesFromXmlNodedrawingState;
+(?)readCellStyledrawingState;
+(?)readFromXmlNodedrawingState;
+(?)readGridFromXmlNode:(?)arg0 toGriddrawingState;
+(?)readPartStyledrawingState;
+(?)readPropertiesFromXmlNode:(?)arg0 toPropertiesdrawingState;
+(?)readRowFromXmlNode:(?)arg0 toRowdrawingState;
+(?)readRowsFromTableXmlNode:(?)arg0 toTabledrawingState;
+(?)readTableStyledrawingState;
+(?)readTextStyledrawingState;
+(?)readThemableEffectsFromParentdrawingState;
+(?)readThemableFillFromParentdrawingState;
+(?)readThemableStrokeFromParentdrawingState;
+(id)readDefaultTableStyleWithDrawingState:(id)arg0 ;
+(int)readOnOffFlag:(id)arg0 ;
+(void)cacheTableStylesInPart:(id)arg0 cache:(id)arg1 drawingState:(id)arg2 ;


@end


#endif