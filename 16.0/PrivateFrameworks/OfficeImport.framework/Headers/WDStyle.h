// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDSTYLE_H
#define WDSTYLE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WDParagraphProperties.h"
#import "WDCharacterProperties.h"
#import "WDTableRowProperties.h"
#import "WDTableCellProperties.h"
#import "WDStyle.h"
#import "WDStyleSheet.h"

@interface WDStyle : NSObject <NSCopying>

 {
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride" mTableStyleOverrides;
    BOOL mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
}


@property (weak) WDStyle *baseStyle; // ivar: mBaseStyle
@property (weak) WDStyle *nextStyle; // ivar: mNextStyle
@property (readonly, weak) WDStyleSheet *styleSheet; // ivar: mStyleSheet


-(BOOL)hidden;
-(BOOL)isAnythingOverridden;
-(id)characterProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)id;
-(id)initWithStyleSheet:(id)arg0 id:(id)arg1 type:(int)arg2 ;
-(id)name;
-(id)paragraphProperties;
-(id)tableCellProperties;
-(id)tableProperties;
-(id)tableRowProperties;
-(id)tableStyleOverrideForPart:(int)arg0 ;
-(int)type;
-(void)setHidden:(BOOL)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif