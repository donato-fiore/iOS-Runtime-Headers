// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTTEXTRULES_H
#define SXCOMPONENTTEXTRULES_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SXComponentTextRules : NSObject <NSCopying>



@property (nonatomic) BOOL allowsScrollPositionRestore; // ivar: _allowsScrollPositionRestore
@property (nonatomic) CGFloat dropCapConstant; // ivar: _dropCapConstant
@property (nonatomic) CGFloat fontResizingTresholdFactor; // ivar: _fontResizingTresholdFactor
@property (nonatomic) CGFloat fontSizeConstant; // ivar: _fontSizeConstant
@property (copy, nonatomic) NSString *fontTextStyle; // ivar: _fontTextStyle
@property (nonatomic) BOOL isSelectable; // ivar: _isSelectable
@property (nonatomic) CGFloat lineHeightConstant; // ivar: _lineHeightConstant
@property (nonatomic) BOOL shouldHyphenate; // ivar: _shouldHyphenate
@property (nonatomic) NSInteger textFlow; // ivar: _textFlow


+(id)bodyTextRules;
+(id)defaultTextRules;
+(id)headingTextRules;
+(id)smallTextRules;
+(id)titleTextRules;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif