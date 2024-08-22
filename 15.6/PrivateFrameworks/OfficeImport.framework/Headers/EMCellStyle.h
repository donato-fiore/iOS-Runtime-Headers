// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMCELLSTYLE_H
#define EMCELLSTYLE_H

@protocol NSCopying;


#import "CMStyle.h"
#import "EDStyle.h"

@interface EMCellStyle : CMStyle <NSCopying>

 {
    EDStyle *_edStyle;
    int _edCellType;
    CGFloat _columnWidth;
    CGFloat _contentWidth;
    BOOL _truncateContents;
    BOOL _resolvedProperties;
}




+(CGFloat)contentWidthForColumnWidth:(CGFloat)arg0 ;
+(id)_parseFontName:(id)arg0 nameContainsBold:(*BOOL)arg1 nameContainsItalic:(*BOOL)arg2 ;
+(id)styleForFont:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)cacheFriendlyCSSStyleString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cssStyleString;
-(id)initWithEDStyle:(id)arg0 type:(int)arg1 columnWidth:(NSUInteger)arg2 contentWidth:(NSUInteger)arg3 truncateContents:(BOOL)arg4 ;
-(void)addAlignmentStyle:(id)arg0 ;
-(void)addBordersStyle:(id)arg0 ;
-(void)addFillStyle:(id)arg0 ;
-(void)addFontStyle:(id)arg0 ;
-(void)resolveContentWidth;
-(void)resolveFormatType;


@end


#endif