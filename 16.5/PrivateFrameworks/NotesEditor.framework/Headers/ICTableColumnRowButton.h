// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLECOLUMNROWBUTTON_H
#define ICTABLECOLUMNROWBUTTON_H

@class UIButton, NSArray;



@interface ICTableColumnRowButton : UIButton

@property (retain, nonatomic) NSArray *columnOrRowIdentifiers; // ivar: _columnOrRowIdentifiers
@property (readonly, nonatomic) BOOL isColumn; // ivar: _isColumn
@property (readonly, nonatomic) BOOL isLTR; // ivar: _isLTR


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)accessibilityContainer;
-(id)initAsColumn:(BOOL)arg0 isLeftToRight:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )touchRect;
-(void)accessibilityDarkerSystemColorsStatusDidChange:(id)arg0 ;
-(void)dealloc;
-(void)updateConfiguration;


@end


#endif