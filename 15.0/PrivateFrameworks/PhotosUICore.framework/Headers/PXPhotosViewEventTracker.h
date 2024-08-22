// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSVIEWEVENTTRACKER_H
#define PXPHOTOSVIEWEVENTTRACKER_H

@class NSString, NSNumber, NSMutableDictionary;
@protocol PXChangeObserver, PXPhotosViewEventTracker;


#import "PXMediaViewControllerEventTracker.h"
#import "PXPhotosViewModel.h"

@interface PXPhotosViewEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PXPhotosViewEventTracker>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *isInSelectModeValue; // ivar: _isInSelectModeValue
@property (readonly, nonatomic) CGFloat isInSelectModeValueTimestamp; // ivar: _isInSelectModeValueTimestamp
@property (copy, nonatomic) NSMutableDictionary *payload;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel


+(CGFloat)selectModeImpressionMinimumDuration;
+(id)analyticsViewName;
-(id)initWithViewModel:(id)arg0 ;
-(id)initWithViewName:(id)arg0 ;
-(void)_invalidateTrackedValues;
-(void)_updateTrackedValues;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif