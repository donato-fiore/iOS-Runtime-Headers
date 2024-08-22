// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKDIALOGTEMPLATE_H
#define IKDIALOGTEMPLATE_H

@class NSArray;


#import "IKViewElement.h"
#import "IKTextElement.h"

@interface IKDialogTemplate : IKViewElement

@property (readonly, retain, nonatomic) NSArray *buttons;
@property (readonly, retain, nonatomic) IKTextElement *descriptionText;
@property (readonly, retain, nonatomic) IKTextElement *title;
@property (readonly, nonatomic) NSUInteger type;




@end


#endif