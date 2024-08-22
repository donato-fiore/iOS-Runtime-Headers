// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSTATICIMAGESTACKVIEW_H
#define CKSTATICIMAGESTACKVIEW_H

@class UIView, PFMessagesStackLayoutFrameSolver, NSArray;



@interface CKStaticImageStackView : UIView

@property (retain, nonatomic) PFMessagesStackLayoutFrameSolver *frameSolver; // ivar: _frameSolver
@property (retain, nonatomic) NSArray *imageLayers; // ivar: _imageLayers
@property (retain, nonatomic) NSArray *mediaObjects; // ivar: _mediaObjects
@property (nonatomic) CGFloat stackCornerRadius; // ivar: _stackCornerRadius


-(Class)_PFMessageStackLayoutFrameSolverClass;
-(id)initWithFrame:(struct CGRect )arg0 mediaObjects:(id)arg1 ;
-(void)_mediaObjectPreviewDidChange:(id)arg0 ;
-(void)_updatePreviews;
-(void)layoutSubviews;


@end


#endif