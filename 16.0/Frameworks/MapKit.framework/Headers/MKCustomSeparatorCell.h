// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKCUSTOMSEPARATORCELL_H
#define MKCUSTOMSEPARATORCELL_H



#import "MKTableViewCell.h"

@interface MKCustomSeparatorCell : MKTableViewCell

@property (nonatomic) CGFloat leadingSeparatorInset;
@property (nonatomic) CGFloat leftSeparatorInset; // ivar: _leftSeparatorInset
@property (nonatomic) CGFloat rightSeparatorInset; // ivar: _rightSeparatorInset
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (nonatomic) CGFloat trailingSeparatorInset;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGRect )_separatorFrame;
-(void)_updateSeparatorInset;


@end


#endif