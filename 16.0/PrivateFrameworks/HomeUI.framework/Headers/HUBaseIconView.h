// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUBASEICONVIEW_H
#define HUBASEICONVIEW_H

@class UIView;
@protocol HUBaseIconViewDelegate;


#import "HUBaseIconViewConfiguration.h"

@interface HUBaseIconView : UIView {
    ? iconConstraints;
    ? configurationWrapper;
    ? configuration;
    ? progressView;
    ? textLabel;
    ? roundButtonView;
}


@property (nonatomic, retain) HUBaseIconViewConfiguration *configuration;
@property (nonatomic, weak) NSObject<HUBaseIconViewDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif