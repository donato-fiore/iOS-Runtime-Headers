// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONROTATIONCONTAINER_H
#define SBICONROTATIONCONTAINER_H

@class UIView, NSString;
@protocol SBIconViewProviding;


#import "SBIcon.h"
#import "SBIconView.h"

@interface SBIconRotationContainer : UIView

@property (readonly, nonatomic) SBIconCoordinate coordinate; // ivar: _coordinate
@property (readonly, nonatomic) SBIcon *endIcon;
@property (readonly, nonatomic) SBIconView *endView; // ivar: _endView
@property (weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (readonly, copy, nonatomic) NSString *location; // ivar: _location
@property (readonly, nonatomic, getter=isOffscreen) BOOL offscreen; // ivar: _offscreen
@property (readonly, nonatomic) SBIcon *startIcon;
@property (readonly, nonatomic) SBIconView *startView; // ivar: _startView
@property (readonly, nonatomic) NSInteger transitionAnimation; // ivar: _transitionAnimation


-(id)addIconViewForIcon:(id)arg0 configurationOptions:(NSUInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 startIcon:(id)arg1 endIcon:(id)arg2 iconViewProvider:(id)arg3 coordinate:(struct SBIconCoordinate )arg4 location:(id)arg5 transitionAnimation:(NSInteger)arg6 offscreen:(BOOL)arg7 ;
-(void)_configureViewIfNecessary:(id)arg0 forShowingSnapshotWhenDeactivated:(BOOL)arg1 ;
-(void)concludeTransition;
-(void)layoutSubviews;
-(void)performTransition;
-(void)prepareToTransition;


@end


#endif