// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKBASECOMPOSEHEADERFIELD_H
#define GKBASECOMPOSEHEADERFIELD_H

@class UIImageView, NSString;


#import "GKLabel.h"
#import "GKHairlineView.h"

@interface GKBaseComposeHeaderField : UIImageView

@property (nonatomic) SEL actionWhenTouched; // ivar: _actionWhenTouched
@property (nonatomic) NSUInteger maxLineCount; // ivar: _maxLineCount
@property (retain, nonatomic) GKLabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) NSString *nameText;
@property (retain, nonatomic) GKHairlineView *separatorView; // ivar: _separatorView
@property (readonly, nonatomic) CGRect valueFrame;
@property (retain, nonatomic) NSString *valueText;


-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForBaselineLayout;
-(void)addConstraintsForValueView:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif