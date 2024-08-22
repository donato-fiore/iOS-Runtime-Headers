// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDTABLESTYLEOVERRIDE_H
#define WDTABLESTYLEOVERRIDE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WDDocument.h"
#import "WDParagraphProperties.h"
#import "WDCharacterProperties.h"
#import "WDTableRowProperties.h"
#import "WDTableCellProperties.h"
#import "WDStyle.h"

@interface WDTableStyleOverride : NSObject <NSCopying>

 {
    WDDocument *mDocument;
    int mPart;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellStyleProperties;
    BOOL mParagraphPropertiesOverridden;
    BOOL mCharacterPropertiesOverridden;
    BOOL mTableRowPropertiesOverridden;
    BOOL mTableCellStylePropertiesOverridden;
}


@property (weak) WDStyle *style; // ivar: mStyle


-(BOOL)isCharacterPropertiesOverridden;
-(BOOL)isParagraphPropertiesOverridden;
-(BOOL)isTableCellStylePropertiesOverridden;
-(BOOL)isTablePropertiesOverridden;
-(BOOL)isTableRowPropertiesOverridden;
-(id)characterProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDocument:(id)arg0 ;
-(id)mutableCharacterProperties;
-(id)mutableParagraphProperties;
-(id)mutableTableCellStyleProperties;
-(id)mutableTableRowProperties;
-(id)paragraphProperties;
-(id)tableCellStyleProperties;
-(id)tableProperties;
-(id)tableRowProperties;
-(int)part;
-(void)setCharacterPropertiesOverridden:(BOOL)arg0 ;
-(void)setParagraphPropertiesOverridden:(BOOL)arg0 ;
-(void)setPart:(int)arg0 ;
-(void)setTableCellStylePropertiesOverridden:(BOOL)arg0 ;
-(void)setTableRowPropertiesOverridden:(BOOL)arg0 ;


@end


#endif