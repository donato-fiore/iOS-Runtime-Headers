// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUISCOREBOARDLAYOUT_H
#define VUISCOREBOARDLAYOUT_H


#import <Foundation/Foundation.h>

#import "VUIScoreboardRowLayout.h"
#import "VUITextLayout.h"

@interface VUIScoreboardLayout : NSObject

@property (nonatomic) _VUICornerRadii borderRadii; // ivar: _borderRadii
@property (retain, nonatomic) VUIScoreboardRowLayout *bottomRowLayout; // ivar: _bottomRowLayout
@property (nonatomic) CGFloat padding; // ivar: _padding
@property (retain, nonatomic) VUITextLayout *textLayout; // ivar: _textLayout
@property (retain, nonatomic) VUIScoreboardRowLayout *topRowLayout; // ivar: _topRowLayout


+(id)_textColor:(NSInteger)arg0 ;
+(id)scoreboardALayout;
+(id)scoreboardBLayout;
+(id)scoreboardCLayoutWithInnerMargin:(CGFloat)arg0 ;
+(int)_textBlendMode;


@end


#endif