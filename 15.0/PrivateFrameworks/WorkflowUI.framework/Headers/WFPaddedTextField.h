// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPADDEDTEXTFIELD_H
#define WFPADDEDTEXTFIELD_H

@class UITextField;



@interface WFPaddedTextField : UITextField

@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets


-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;


@end


#endif