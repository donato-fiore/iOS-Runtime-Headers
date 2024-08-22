// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYBACKCONTROLSROUTEPICKERVIEW_H
#define AVPLAYBACKCONTROLSROUTEPICKERVIEW_H

@class NSString;
@protocol AVPlaybackControlsViewItem;


#import "AVRoutePickerView.h"
#import "AVButton.h"
#import "AVLayoutItemAttributes.h"

@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView <AVPlaybackControlsViewItem>

 {
    AVButton *_customButton;
}


@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (retain, nonatomic) NSString *currentMicaPackageName; // ivar: _currentMicaPackageName
@property (readonly, nonatomic) AVButton *customButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize extrinsicContentSize;
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateCustomButtonMicaPackage;
-(void)_updateLayoutItem;
-(void)setPrioritizesVideoDevices:(BOOL)arg0 ;
-(void)updateButtonAppearance;


@end


#endif