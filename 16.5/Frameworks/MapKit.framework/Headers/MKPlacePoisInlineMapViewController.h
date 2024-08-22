// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACEPOISINLINEMAPVIEWCONTROLLER_H
#define MKPLACEPOISINLINEMAPVIEWCONTROLLER_H

@class NSArray, NSString, CLLocation;
@protocol MKStackingViewControllerFixedHeightAware;


#import "MKPlaceInlineMapViewController.h"
#import "_MKPlacePoisInlineMapContentView.h"

@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController <MKStackingViewControllerFixedHeightAware>

 {
    NSArray *_fetchedMapItems;
    _MKPlacePoisInlineMapContentView *_mapContentView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) BOOL resizableViewsDisabled; // ivar: _resizableViewsDisabled
@property (readonly) Class superclass;


+(id)inlineMapWithMapItem:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)_canShowWhileLocked;
-(NSInteger)preferredUserInterfaceStyle;
-(id)geoCamera;
-(id)visibleMapItems;
-(void)_handleTapOnMap;
-(void)_updateMap;
-(void)fetchPoisForBrand;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif