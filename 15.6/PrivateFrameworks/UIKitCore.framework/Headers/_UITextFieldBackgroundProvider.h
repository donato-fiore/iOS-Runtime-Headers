// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTFIELDBACKGROUNDPROVIDER_H
#define _UITEXTFIELDBACKGROUNDPROVIDER_H


#import <Foundation/Foundation.h>

#import "UITextField.h"

@interface _UITextFieldBackgroundProvider : NSObject {
    UITextField *_textField;
}


@property (readonly, nonatomic) NSInteger associatedBorderStyle;
@property (readonly, nonatomic) BOOL drawsContent;
@property (readonly, weak, nonatomic) UITextField *textField;


-(BOOL)_isTV;
-(BOOL)hitTestView:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)focusRingPathForBounds:(struct CGRect )arg0 ;
-(id)overridingGetBackgroundColor;
-(id)overridingSetBackgroundColor:(id)arg0 ;
-(id)preferredMetricsProvider;
-(void)_buildDescription:(id)arg0 ;
-(void)addToTextField:(id)arg0 ;
-(void)borderStyleDidChange:(BOOL)arg0 ;
-(void)controlSizeDidChange:(BOOL)arg0 ;
-(void)decodeWithCoder:(id)arg0 ;
-(void)didChangeFirstResponder;
-(void)enabledDidChangeAnimated:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)highlightedDidChangeAnimated:(BOOL)arg0 ;
-(void)layoutIfNeeded;
-(void)populateArchivedSubviews:(id)arg0 ;
-(void)removeFromTextField;
-(void)selectedDidChangeAnimated:(BOOL)arg0 ;
-(void)setNeedsDisplay;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif