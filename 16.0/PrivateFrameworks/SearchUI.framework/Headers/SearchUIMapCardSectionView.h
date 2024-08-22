// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIMAPCARDSECTIONVIEW_H
#define SEARCHUIMAPCARDSECTIONVIEW_H

@class CLPlacemark, NSString, TLKLabel, TLKStackView, MKMapSnapshotter, MKPinAnnotationView, SFMapCardSection, TLKImageView, UITapGestureRecognizer;
@protocol NUIContainerViewDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIMapCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate>



@property (retain, nonatomic) CLPlacemark *currentPlacemark; // ivar: _currentPlacemark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TLKLabel *footnoteDescriptorLabel; // ivar: _footnoteDescriptorLabel
@property (retain, nonatomic) TLKLabel *footnoteLabel; // ivar: _footnoteLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKStackView *labelsStackView; // ivar: _labelsStackView
@property (retain, nonatomic) MKMapSnapshotter *mapSnapshotter; // ivar: _mapSnapshotter
@property (retain, nonatomic) MKPinAnnotationView *pinAnnotationView; // ivar: _pinAnnotationView
@property (readonly, nonatomic) SFMapCardSection *section;
@property (retain, nonatomic) TLKImageView *snapshotView; // ivar: _snapshotView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer


+(BOOL)fillsBackgroundWithContentForCardSection:(id)arg0 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(id)_postalAddressFromPlacemark:(id)arg0 ;
-(CGFloat)requestedMapHeight;
-(id)_clLocationFromSFLatLng:(id)arg0 ;
-(id)setupContentView;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(void)_mapButtonPressed;
-(void)_updateSnapshot;
-(void)_updateSnapshotWithSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)sendMapFeedbackWithTriggerEvent:(NSUInteger)arg0 placemarkData:(id)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif