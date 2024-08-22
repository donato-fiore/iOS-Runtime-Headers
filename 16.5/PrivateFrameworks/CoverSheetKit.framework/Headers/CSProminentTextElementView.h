// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPROMINENTTEXTELEMENTVIEW_H
#define CSPROMINENTTEXTELEMENTVIEW_H

@class NSDate, NSString, UIFont, UIColor, UILabel;
@protocol CSProminentTextDefining;


#import "CSProminentElementView.h"

@interface CSProminentTextElementView : CSProminentElementView <CSProminentTextDefining>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *overrideString; // ivar: _overrideString
@property (retain, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel


+(NSUInteger)elementType;
-(id)displayString;
-(id)initWithDate:(id)arg0 font:(id)arg1 textColor:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif