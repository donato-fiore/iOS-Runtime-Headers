// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACCESSIBILITYCUSTOMACTION_H
#define UIACCESSIBILITYCUSTOMACTION_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UIAccessibilityCustomAction : NSObject

@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (copy, nonatomic) NSAttributedString *attributedName; // ivar: _attributedName
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *name;
@property (nonatomic) SEL selector; // ivar: _selector
@property (weak, nonatomic) id *target; // ivar: _target


-(id)init;
-(id)initWithAttributedName:(id)arg0 actionHandler:(id)arg1 ;
-(id)initWithAttributedName:(id)arg0 image:(id)arg1 actionHandler:(id)arg2 ;
-(id)initWithAttributedName:(id)arg0 image:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithAttributedName:(id)arg0 target:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithName:(id)arg0 actionHandler:(id)arg1 ;
-(id)initWithName:(id)arg0 image:(id)arg1 actionHandler:(id)arg2 ;
-(id)initWithName:(id)arg0 image:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithName:(id)arg0 target:(id)arg1 selector:(SEL)arg2 ;


@end


#endif