// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPCONTROL_H
#define TPCONTROL_H

@class UIControl;



@interface TPControl : UIControl

@property (nonatomic, getter=isAccessiblityConstraintsEnabled) BOOL accessiblityConstraintsEnabled; // ivar: _accessiblityConstraintsEnabled
@property (nonatomic, getter=isConstraintsLoaded) BOOL constraintsLoaded; // ivar: _constraintsLoaded


+(BOOL)requiresConstraintBasedLayout;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)loadConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unloadConstraints;
-(void)updateConstraints;
-(void)updateConstraintsConstants;
-(void)updateFonts;


@end


#endif