// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUTITLEVIEWSTYLER_H
#define NUTITLEVIEWSTYLER_H

@class NSString, UIColor;
@protocol NUTitleViewStyler;

#import <Foundation/Foundation.h>


@interface NUTitleViewStyler : NSObject <NUTitleViewStyler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)init;
-(id)initWithTextColor:(id)arg0 ;
-(id)messageLargeFont;
-(id)messageParagraphStyle;
-(id)messageSmallFont;
-(id)styleTextAsMessage:(id)arg0 boundingSize:(struct CGSize )arg1 ;
-(id)styleTextAsTitle:(id)arg0 boundingSize:(struct CGSize )arg1 ;
-(id)styleTitleText:(id)arg0 styleType:(NSUInteger)arg1 boundingSize:(struct CGSize )arg2 ;
-(id)titleLargeFont;
-(id)titleParagraphStyleWithWrapping:(BOOL)arg0 ;
-(id)titleSmallFont;


@end


#endif