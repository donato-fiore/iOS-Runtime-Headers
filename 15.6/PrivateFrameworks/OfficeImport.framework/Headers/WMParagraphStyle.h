// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WMPARAGRAPHSTYLE_H
#define WMPARAGRAPHSTYLE_H



#import "WMStyle.h"
#import "WDStyle.h"

@interface WMParagraphStyle : WMStyle {
    WDStyle *_baseStyle;
    BOOL _isInTextFrame;
}




+(BOOL)isShadingNull:(id)arg0 ;
-(BOOL)isRTLWithOverridesFromProperties:(id)arg0 ;
-(id)initWithWDStyle:(id)arg0 isInTextFrame:(BOOL)arg1 ;
-(id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg0 ;
-(id)trailingMarginPropertyNameWithOverridesFromProperties:(id)arg0 ;
-(void)addParagraphProperties:(id)arg0 ;
-(void)addParagraphPropertiesFromStyle;
-(void)addParagraphPropertiesFromStyle:(id)arg0 ;
-(void)addParagraphStyleCharacterProperties:(id)arg0 ;
-(void)mapBorders:(id)arg0 ;


@end


#endif