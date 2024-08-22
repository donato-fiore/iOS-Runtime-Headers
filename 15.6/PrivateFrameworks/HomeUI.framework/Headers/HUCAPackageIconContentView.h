// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAPACKAGEICONCONTENTVIEW_H
#define HUCAPACKAGEICONCONTENTVIEW_H

@class CAPackage, NSArray, CALayer, CAStateController, NSString;
@protocol CAStateControllerDelegate, HFIconDescriptor;


#import "HUIconContentView.h"

@interface HUCAPackageIconContentView : HUIconContentView <CAStateControllerDelegate>



@property (nonatomic) CGSize assetSize; // ivar: _assetSize
@property (retain, nonatomic) CAPackage *package; // ivar: _package
@property (retain, nonatomic) NSArray *packageLayers; // ivar: _packageLayers
@property (retain, nonatomic) NSObject<HFIconDescriptor> *renouncedPackageDescriptor; // ivar: _renouncedPackageDescriptor
@property (retain, nonatomic) CALayer *rootLayer; // ivar: _rootLayer
@property (retain, nonatomic) CAStateController *stateController; // ivar: _stateController
@property (retain, nonatomic) NSString *stateName; // ivar: _stateName


+(BOOL)_isAnimationEnabled;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyModifiers;
-(void)_tryRenouncePackageForIconDescriptor:(id)arg0 ;
-(void)_updateForRTL:(BOOL)arg0 ;
-(void)_updateStateAnimated:(BOOL)arg0 ;
-(void)_updateWithPackage:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reclaimIconIfPossible;
-(void)renounceIconIfPossible;
-(void)setState:(id)arg0 ;
-(void)setState:(id)arg0 animated:(BOOL)arg1 ;
-(void)stateController:(id)arg0 didSetStateOfLayer:(id)arg1 ;
-(void)stateController:(id)arg0 transitionDidStart:(id)arg1 speed:(float)arg2 ;
-(void)stateController:(id)arg0 transitionDidStop:(id)arg1 completed:(BOOL)arg2 ;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif