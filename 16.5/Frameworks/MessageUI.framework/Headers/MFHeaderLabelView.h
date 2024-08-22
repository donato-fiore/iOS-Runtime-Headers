// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFHEADERLABELVIEW_H
#define MFHEADERLABELVIEW_H

@class UILabel;



@interface MFHeaderLabelView : UILabel



+(id)_defaultColor;
-(id)effectiveTextColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )baselinePoint;
-(void)_updateTextColor;
-(void)tintColorDidChange;


@end


#endif