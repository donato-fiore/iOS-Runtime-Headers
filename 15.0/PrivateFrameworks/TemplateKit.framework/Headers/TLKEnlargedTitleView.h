// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKENLARGEDTITLEVIEW_H
#define TLKENLARGEDTITLEVIEW_H



#import "TLKView.h"
#import "TLKMultilineText.h"
#import "TLKLabel.h"

@interface TLKEnlargedTitleView : TLKView

@property (retain, nonatomic) TLKMultilineText *subtitle; // ivar: _subtitle
@property (retain, nonatomic) TLKLabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) TLKMultilineText *title; // ivar: _title
@property (retain, nonatomic) TLKLabel *titleLabel; // ivar: _titleLabel


-(id)setupContentView;
-(void)observedPropertiesChanged;


@end


#endif