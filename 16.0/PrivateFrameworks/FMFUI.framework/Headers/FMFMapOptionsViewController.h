// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFMAPOPTIONSVIEWCONTROLLER_H
#define FMFMAPOPTIONSVIEWCONTROLLER_H

@class UIViewController, UIView, MKMapAttribution, UIButton, UISegmentedControl;
@protocol FMFMapOptionsViewControllerDelegate;



@interface FMFMapOptionsViewController : UIViewController

@property (retain, nonatomic) UIView *bottomWhitePane; // ivar: _bottomWhitePane
@property (weak, nonatomic) NSObject<FMFMapOptionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MKMapAttribution *mapAttribution; // ivar: _mapAttribution
@property (retain, nonatomic) UIButton *mapAttributionButton; // ivar: _mapAttributionButton
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (retain, nonatomic) UIView *topTapView; // ivar: _topTapView


-(id)init;
-(struct CGSize )paneSize;
-(void)_dismiss:(id)arg0 ;
-(void)attributionButtonPressed:(id)arg0 ;
-(void)awakeFromNib;
-(void)openInMaps:(id)arg0 ;
-(void)segmentedControlChanged:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif