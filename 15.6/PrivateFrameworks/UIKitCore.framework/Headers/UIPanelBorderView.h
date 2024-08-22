// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPANELBORDERVIEW_H
#define UIPANELBORDERVIEW_H

@class NSString;


#import "UIView.h"
#import "UIPanelBorderReplicatingView.h"

@interface UIPanelBorderView : UIView

@property (retain, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (nonatomic, getter=isDraggable) BOOL draggable; // ivar: _draggable
@property (nonatomic) BOOL observesTime; // ivar: _observesTime
@property (retain, nonatomic) UIPanelBorderReplicatingView *replicatingView; // ivar: _replicatingView
@property (nonatomic) NSInteger statusBarAvoidance; // ivar: _statusBarAvoidance


-(id)_cachedBackdropGroupName;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif