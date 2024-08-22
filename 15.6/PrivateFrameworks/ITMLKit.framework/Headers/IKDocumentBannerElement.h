// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKDOCUMENTBANNERELEMENT_H
#define IKDOCUMENTBANNERELEMENT_H

@class UIColor, NSArray;


#import "IKViewElement.h"
#import "IKBackgroundElement.h"
#import "IKLockupElement.h"
#import "IKTextElement.h"

@interface IKDocumentBannerElement : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, retain, nonatomic) NSArray *buttons;
@property (readonly, nonatomic, getter=isFixed) BOOL fixed; // ivar: _fixed
@property (readonly, retain, nonatomic) IKLockupElement *lockup;
@property (readonly, retain, nonatomic) IKTextElement *subtitle;
@property (readonly, retain, nonatomic) IKTextElement *title;


-(BOOL)fixed;


@end


#endif