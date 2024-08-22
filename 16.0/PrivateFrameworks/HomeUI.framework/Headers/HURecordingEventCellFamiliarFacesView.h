// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HURECORDINGEVENTCELLFAMILIARFACESVIEW_H
#define HURECORDINGEVENTCELLFAMILIARFACESVIEW_H

@class UIView, NSArray, NSLayoutConstraint, UILabel;
@protocol HFCameraImageObserver;



@interface HURecordingEventCellFamiliarFacesView : UIView <HFCameraImageObserver>



@property (readonly, nonatomic) NSArray *imageViews; // ivar: _imageViews
@property (retain, nonatomic) NSLayoutConstraint *leftTitleConstraint; // ivar: _leftTitleConstraint
@property (nonatomic) CGFloat maxWidthForNames; // ivar: _maxWidthForNames
@property (retain, nonatomic) UIView *pointerView; // ivar: _pointerView
@property (retain, nonatomic) NSArray *sortedPeople; // ivar: _sortedPeople
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)faceCropImageView;
+(id)placeholderImage;
-(id)faceCropImageViews;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)manager:(id)arg0 didFindFaceCrop:(id)arg1 forClip:(id)arg2 usingPersonName:(id)arg3 ;
-(void)manager:(id)arg0 failedToFindFaceCropForPersonName:(id)arg1 ;
-(void)resizeWithMaxWidth:(CGFloat)arg0 ;
-(void)updateTitleLabel;
-(void)updateWithPersonEvents:(id)arg0 forCameraClip:(id)arg1 ;


@end


#endif