// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUNEWSFEEDTITLEVIEWSTYLER_H
#define NUNEWSFEEDTITLEVIEWSTYLER_H

@class NSString, UIColor;
@protocol NUTitleViewStyler;

#import <Foundation/Foundation.h>


@interface NUNewsFeedTitleViewStyler : NSObject <NUTitleViewStyler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)init;
-(id)initWithTextAlignment:(NSInteger)arg0 ;
-(id)messageLargeFont;
-(id)messageSmallFont;
-(id)styleTextAsMessage:(id)arg0 boundingSize:(struct CGSize )arg1 ;
-(id)styleTextAsTitle:(id)arg0 boundingSize:(struct CGSize )arg1 ;
-(id)styleTitleText:(id)arg0 styleType:(NSUInteger)arg1 boundingSize:(struct CGSize )arg2 ;
-(id)titleExtraLargeFont;
-(id)titleParagraphStyleWithWrapping:(BOOL)arg0 ;
-(void)updateWithTextColor:(id)arg0 ;


@end


#endif