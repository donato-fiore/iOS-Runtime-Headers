// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFMESSAGECONTENTRESIZEWRAPPERVIEW_H
#define _MFMESSAGECONTENTRESIZEWRAPPERVIEW_H

@class UIView;



@interface _MFMessageContentResizeWrapperView : UIView

@property (retain, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (nonatomic) CGFloat snapshotViewYOrigin; // ivar: _snapshotViewYOrigin


-(id)initWithFrame:(struct CGRect )arg0 snapshotView:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif