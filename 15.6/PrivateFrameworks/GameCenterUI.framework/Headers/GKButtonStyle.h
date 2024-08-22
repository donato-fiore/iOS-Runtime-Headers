// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKBUTTONSTYLE_H
#define GKBUTTONSTYLE_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface GKButtonStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL clipToBounds; // ivar: _clipToBounds
@property (nonatomic) id *compositingFilter; // ivar: _compositingFilter
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) UIEdgeInsets titleEdgeInsets; // ivar: _titleEdgeInsets


+(id)defaultStyle;
+(id)standardStyle;
-(id)initWithCornerRadius:(CGFloat)arg0 andBackgroundColor:(id)arg1 ;
-(void)applyToButton:(id)arg0 ;


@end


#endif