// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCOMPOSESTYLESELECTORBUTTON_H
#define MFCOMPOSESTYLESELECTORBUTTON_H

@class UIButton, NSString;



@interface MFComposeStyleSelectorButton : UIButton

@property (nonatomic) NSString *maximumContentSizeCategory; // ivar: _maximumContentSizeCategory
@property (readonly, nonatomic) NSInteger styleType; // ivar: _styleType


+(id)buttonWithStyleType:(NSInteger)arg0 target:(id)arg1 action:(SEL)arg2 ;
+(id)buttonWithStyleType:(NSInteger)arg0 target:(id)arg1 action:(SEL)arg2 maximumContentSizeCategory:(id)arg3 ;
-(id)_imageForTextStyleType:(NSInteger)arg0 maximumContentSizeCategory:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif