// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCDETAILTABLEVIEWCELL_H
#define NTKCDETAILTABLEVIEWCELL_H

@class UITableViewCell, UIView;



@interface NTKCDetailTableViewCell : UITableViewCell

@property (nonatomic) BOOL ignoresRTLCorrection; // ivar: _ignoresRTLCorrection
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (nonatomic) BOOL showsSeparator; // ivar: _showsSeparator


+(id)defaultTextColor;
+(id)reuseIdentifier;
+(id)titleFont;
-(BOOL)_visibleAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)rowHeight;
-(id)_fontForDetailTextLabel;
-(id)_fontForTextLabel;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_fontSizeDidChange;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif