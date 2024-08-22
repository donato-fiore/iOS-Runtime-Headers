// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKLISTITEMLOCKUPELEMENT_H
#define IKLISTITEMLOCKUPELEMENT_H

@class NSArray, NSString;


#import "IKViewElement.h"
#import "IKActivityIndicatorElement.h"
#import "IKCheckMarkElement.h"
#import "IKTextElement.h"
#import "IKOrdinalElement.h"
#import "IKProgressIndicatorElement.h"

@interface IKListItemLockupElement : IKViewElement

@property (readonly, retain, nonatomic) IKActivityIndicatorElement *activityIndicator;
@property (readonly, retain, nonatomic) IKCheckMarkElement *checkMark;
@property (readonly, retain, nonatomic) NSArray *decorationImages;
@property (readonly, retain, nonatomic) IKTextElement *decorationLabel;
@property (readonly, retain, nonatomic) NSArray *images;
@property (readonly, nonatomic) NSString *itemHeight;
@property (readonly, retain, nonatomic) IKOrdinalElement *ordinal;
@property (readonly, retain, nonatomic) IKProgressIndicatorElement *progressIndicator;
@property (readonly, retain, nonatomic) IKViewElement *relatedContent;
@property (readonly, retain, nonatomic) IKTextElement *subtitle;
@property (readonly, retain, nonatomic) IKTextElement *title;




@end


#endif