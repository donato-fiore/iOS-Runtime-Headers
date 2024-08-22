// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUICONSTRAINEDFONTUTILITIES_H
#define EKUICONSTRAINEDFONTUTILITIES_H


#import <Foundation/Foundation.h>


@interface EKUIConstrainedFontUtilities : NSObject



+(NSInteger)tableViewCellCappedSymbolImageScaleWithScale:(NSInteger)arg0 traitCollection:(id)arg1 ;
+(id)constrainedBodyBoldTextLabelFont;
+(id)constrainedBodyTextLabelFont;
+(id)constrainedCaption1TextLabelFont;
+(id)constrainedFontForTextStyle:(id)arg0 maximumContentSizeCategory:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 traitCollection:(id)arg3 ;
+(id)constrainedFontForTextStyle:(id)arg0 maximumContentSizeCategory:(id)arg1 traitCollection:(id)arg2 ;
+(id)constrainedFontForTextStyle:(id)arg0 minimumContentSizeCategory:(id)arg1 maximumContentSizeCategory:(id)arg2 traitCollection:(id)arg3 ;
+(id)constrainedFontForTextStyle:(id)arg0 minimumContentSizeCategory:(id)arg1 traitCollection:(id)arg2 ;
+(void)clearFontCaches;
+(void)initialize;


@end


#endif