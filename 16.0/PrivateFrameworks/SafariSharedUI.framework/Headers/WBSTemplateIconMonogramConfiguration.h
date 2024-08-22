// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTEMPLATEICONMONOGRAMCONFIGURATION_H
#define WBSTEMPLATEICONMONOGRAMCONFIGURATION_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface WBSTemplateIconMonogramConfiguration : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGFloat baselineOffset; // ivar: _baselineOffset
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) NSInteger fontWeight; // ivar: _fontWeight
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (nonatomic) CGSize iconSize; // ivar: _iconSize
@property (nonatomic) BOOL skipMonogramGeneration; // ivar: _skipMonogramGeneration


+(id)configurationWithBackgroundColor:(id)arg0 ;
+(id)configurationWithIconSize:(struct CGSize )arg0 fontSize:(CGFloat)arg1 fontWeight:(NSInteger)arg2 baselineOffset:(CGFloat)arg3 backgroundColor:(id)arg4 cornerRadius:(CGFloat)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif