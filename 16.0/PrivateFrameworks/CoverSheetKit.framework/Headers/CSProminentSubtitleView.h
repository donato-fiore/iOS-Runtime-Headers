// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPROMINENTSUBTITLEVIEW_H
#define CSPROMINENTSUBTITLEVIEW_H



#import "CSProminentTextElementView.h"
#import "CSProminentSubtitleDateView.h"

@interface CSProminentSubtitleView : CSProminentTextElementView

@property (retain, nonatomic) CSProminentSubtitleDateView *compactDateView; // ivar: _compactDateView
@property (retain, nonatomic) CSProminentSubtitleDateView *dateView; // ivar: _dateView


+(NSUInteger)elementType;
-(BOOL)_usesCompactDate;
-(id)initWithDate:(id)arg0 font:(id)arg1 textColor:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDate:(id)arg0 ;


@end


#endif