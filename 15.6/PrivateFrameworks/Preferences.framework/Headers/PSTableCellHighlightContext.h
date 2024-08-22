// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSTABLECELLHIGHLIGHTCONTEXT_H
#define PSTABLECELLHIGHLIGHTCONTEXT_H

@class NSTimer, UITableViewCell;

#import <Foundation/Foundation.h>


@interface PSTableCellHighlightContext : NSObject {
    NSTimer *_timer;
}


@property (readonly, nonatomic) BOOL animateUnhighlight; // ivar: _animateUnhighlight
@property (weak, nonatomic) UITableViewCell *cell; // ivar: _cell
@property (nonatomic) NSInteger originalSelectionStyle; // ivar: _originalSelectionStyle
@property (readonly, nonatomic) BOOL valid; // ivar: _valid


+(id)contextWithCell:(id)arg0 ;
-(void)_killTimer;
-(void)_timerFired;
-(void)dealloc;
-(void)performHighlightForDuration:(CGFloat)arg0 animateUnhighlight:(BOOL)arg1 ;


@end


#endif