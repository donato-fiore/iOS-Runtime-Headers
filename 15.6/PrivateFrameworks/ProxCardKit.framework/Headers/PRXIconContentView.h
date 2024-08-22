// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRXICONCONTENTVIEW_H
#define PRXICONCONTENTVIEW_H

@class NSArray, UILayoutGuide;


#import "PRXCardContentView.h"
#import "PRXLabel.h"

@interface PRXIconContentView : PRXCardContentView {
    NSArray *_imageViewsConstraints;
    NSArray *_bodyLabelConstraints;
    UILayoutGuide *_imageViewsGuide;
}


@property (retain, nonatomic) PRXLabel *bodyLabel; // ivar: _bodyLabel
@property (copy, nonatomic) NSArray *imageViews; // ivar: _imageViews


-(id)initWithCardStyle:(NSInteger)arg0 ;
-(void)updateConstraints;


@end


#endif