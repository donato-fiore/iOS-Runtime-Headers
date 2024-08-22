// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCONTROLHOSTVIEW_H
#define HUCONTROLHOSTVIEW_H

@class UIView, NSArray;



@interface HUControlHostView : UIView

@property (retain, nonatomic) NSArray *controlConstraints; // ivar: _controlConstraints
@property (retain, nonatomic) UIView *controlView; // ivar: _controlView
@property (nonatomic) BOOL requiresWellDefinedSize; // ivar: _requiresWellDefinedSize


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithControlView:(id)arg0 ;
-(void)updateConstraints;


@end


#endif