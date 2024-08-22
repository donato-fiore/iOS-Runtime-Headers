// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILTOGGLECELL_H
#define NTKCFACEDETAILTOGGLECELL_H

@class UISwitch;
@protocol NTKCFaceDetailToggleCellDelegate;


#import "NTKCDetailTableViewCell.h"

@interface NTKCFaceDetailToggleCell : NTKCDetailTableViewCell

@property (weak, nonatomic) NSObject<NTKCFaceDetailToggleCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL on;
@property (retain, nonatomic) UISwitch *toggle; // ivar: _toggle


+(id)reuseIdentifier;
-(CGFloat)rowHeight;
-(id)init;
-(void)_switchToggled;
-(void)layoutSubviews;


@end


#endif