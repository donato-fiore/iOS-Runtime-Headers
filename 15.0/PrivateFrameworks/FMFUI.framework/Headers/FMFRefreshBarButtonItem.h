// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMFREFRESHBARBUTTONITEM_H
#define FMFREFRESHBARBUTTONITEM_H

@class UIBarButtonItem, UIImageView, NSSet;


#import "FMFTintedActivityIndicatorView.h"
#import "FMFRefreshWrapperButton.h"

@interface FMFRefreshBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) FMFTintedActivityIndicatorView *aiv; // ivar: _aiv
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) id *locateNotification; // ivar: _locateNotification
@property (retain, nonatomic) NSSet *locations; // ivar: _locations
@property (retain, nonatomic) FMFRefreshWrapperButton *wrapperButton; // ivar: _wrapperButton


-(BOOL)anyLocationIsUpdating;
-(BOOL)isAnimating;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_updateLocateInProgress;
-(void)addLocation:(id)arg0 ;
-(void)dealloc;
-(void)localTapped;
-(void)locatingInProgressChanged:(id)arg0 ;
-(void)removeLocationForHandle:(id)arg0 ;
-(void)setImageInsets:(struct UIEdgeInsets )arg0 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)updateLocations;


@end


#endif