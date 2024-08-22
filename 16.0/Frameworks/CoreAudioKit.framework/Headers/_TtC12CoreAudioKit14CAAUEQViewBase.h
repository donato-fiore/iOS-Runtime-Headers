// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT14CAAUEQVIEWBASE_H
#define _TTC12COREAUDIOKIT14CAAUEQVIEWBASE_H

@class UIView;


#import "_TtC12CoreAudioKit15CAAUEQGraphView.h"
#import "_TtC12CoreAudioKit16CAAUEQHeaderView.h"

@interface _TtC12CoreAudioKit14CAAUEQViewBase : UIView {
    ? viewSetup;
    ? permanentHeaderConstraints;
    ? permanentGraphConstraints;
    ? temporaryConstraints;
    ? $__lazy_storage_$_headerView;
    ? $__lazy_storage_$_graphView;
}


@property (nonatomic, retain) _TtC12CoreAudioKit15CAAUEQGraphView *graphView;
@property (nonatomic, retain) _TtC12CoreAudioKit16CAAUEQHeaderView *headerView;


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureViewFor:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)tintColorDidChange;


@end


#endif