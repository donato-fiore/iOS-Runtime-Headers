// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTILECELLBACKGROUNDVIEW_H
#define HUTILECELLBACKGROUNDVIEW_H

@class UIView;
@protocol HUBackgroundEffectViewGrouping;



@interface HUTileCellBackgroundView : UIView {
    ? currentEffectIdentifier;
    ? $__lazy_storage_$_visualEffectView;
    ? dashedBorderView;
    ? $__lazy_storage_$_controlCenterTileOffMaterialView;
}


@property (nonatomic, weak) NSObject<HUBackgroundEffectViewGrouping> *effectGrouper; // ivar: effectGrouper


-(id)initWithCoder:(id)arg0 ;
-(id)initWithEffectIdentifier:(id)arg0 effectGrouper:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateWithEffectIdentifier:(id)arg0 ;


@end


#endif