// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOMPOSEIMAGESIZEVIEW_H
#define MFCOMPOSEIMAGESIZEVIEW_H

@class UISegmentedControl, NSMutableArray;
@protocol MFComposeImageSizeViewDelegate;


#import "MFMailComposeHeaderView.h"

@interface MFComposeImageSizeView : MFMailComposeHeaderView {
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_visibleScales;
}


@property (weak, nonatomic) NSObject<MFComposeImageSizeViewDelegate> *delegate;


-(NSUInteger)_insertIndexForScale:(NSUInteger)arg0 ;
-(NSUInteger)_scaleLabelIndexForScale:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)removeSizeDescriptionForScale:(NSUInteger)arg0 ;
-(void)segmentedControlChanged;
-(void)setScale:(NSUInteger)arg0 ;
-(void)setSizeDescription:(id)arg0 forScale:(NSUInteger)arg1 ;


@end


#endif