// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT21AUGENERICVIEWINTERNAL_H
#define _TTC12COREAUDIOKIT21AUGENERICVIEWINTERNAL_H

@class UIView, AUAudioUnit, UIViewController;



@interface _TtC12CoreAudioKit21AUGenericViewInternal : UIView {
    ? dataSource;
    ? collectionView;
    ? hasGroups;
    ? pathsNeedingPeriodicUpdates;
    ? scheduledUpdatesTimer;
    ? showSingleClumpIndex;
    ? paramDictionary;
    ? widthInfo;
}


@property (nonatomic, retain) AUAudioUnit *auAudioUnit; // ivar: auAudioUnit
@property (nonatomic, retain) UIViewController *owningController; // ivar: owningController
@property (nonatomic) *void paramObserverToken; // ivar: paramObserverToken


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)removeFromSuperview;
-(void)removeScheduledUpdatesTimer;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif