// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKBUTTONVIEW_H
#define TLKBUTTONVIEW_H

@class NSString;


#import "TLKView.h"
#import "TLKStackView.h"
#import "TLKLabel.h"

@interface TLKButtonView : TLKView

@property (retain, nonatomic) TLKStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) TLKLabel *titleLabel; // ivar: _titleLabel


+(struct UIEdgeInsets )defaultLayoutMargins;
-(id)setupContentView;
-(void)observedPropertiesChanged;


@end


#endif