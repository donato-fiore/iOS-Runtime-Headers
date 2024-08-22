// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTFIELDVIEWBACKGROUNDPROVIDER_H
#define _UITEXTFIELDVIEWBACKGROUNDPROVIDER_H

@class UITextFieldBackgroundProvider;


#import "UIView.h"

@interface _UITextFieldViewBackgroundProvider : UITextFieldBackgroundProvider

@property (readonly, nonatomic) UIView *backgroundView;


-(BOOL)hitTestView:(id)arg0 ;
-(id)overridingSetBackgroundColor:(id)arg0 ;
-(void)_buildDescription:(id)arg0 ;
-(void)addToTextField:(id)arg0 ;
-(void)didChangeFirstResponder;
-(void)layoutIfNeeded;
-(void)populateArchivedSubviews:(id)arg0 ;
-(void)removeFromTextField;
-(void)setNeedsDisplay;


@end


#endif