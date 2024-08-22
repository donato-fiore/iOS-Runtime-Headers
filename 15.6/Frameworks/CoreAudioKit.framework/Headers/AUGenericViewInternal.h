// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUGENERICVIEWINTERNAL_H
#define AUGENERICVIEWINTERNAL_H

@class UIView, AUAudioUnit, UIViewController;



@interface AUGenericViewInternal : UIView {
    ? dataSource;
    ? collectionView;
    ? headerCellRegistration;
    ? boolCellRegistration;
    ? indexedCellRegistration;
    ? meterCellRegistration;
    ? genericCellRegistration;
    ? hasClumps;
    ? pathsNeedingPeriodicUpdates;
    ? scheduledUpdatesTimer;
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