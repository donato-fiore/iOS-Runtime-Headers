// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCREDENTIALREQUESTINFOLABELSUBPANE_H
#define ASCREDENTIALREQUESTINFOLABELSUBPANE_H

@class UILabel, NSString;


#import "ASCredentialRequestSubPane.h"

@interface ASCredentialRequestInfoLabelSubPane : ASCredentialRequestSubPane {
    UILabel *_infoLabel;
}


@property (nonatomic) CGFloat marginInset; // ivar: _marginInset
@property (retain, nonatomic) NSString *text;


+(CGFloat)_infoLabelMarginInset;
+(id)_fontForLabelType:(NSUInteger)arg0 ;
+(id)_infoLabelWithString:(id)arg0 labelType:(NSUInteger)arg1 ;
+(id)_titleFont;
-(id)initWithString:(id)arg0 labelType:(NSUInteger)arg1 ;
-(void)addToStackView:(id)arg0 withCustomSpacingAfter:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif