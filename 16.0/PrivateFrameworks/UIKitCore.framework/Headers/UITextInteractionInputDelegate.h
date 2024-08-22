// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTINTERACTIONINPUTDELEGATE_H
#define UITEXTINTERACTIONINPUTDELEGATE_H

@class NSString;
@protocol UITextInputDelegate;

#import <Foundation/Foundation.h>

#import "UITextInteraction.h"

@interface UITextInteractionInputDelegate : NSObject <UITextInputDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UITextInteraction *rootInteraction; // ivar: _rootInteraction
@property (readonly) Class superclass;


-(void)selectionDidChange:(id)arg0 ;
-(void)selectionWillChange:(id)arg0 ;
-(void)textDidChange:(id)arg0 ;
-(void)textWillChange:(id)arg0 ;


@end


#endif