// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUILABEL_H
#define PXUILABEL_H

@class UIView, UILabel, UIVisualEffectView, NSArray, NSString;


#import "PXLabelSpec.h"

@interface PXUILabel : UIView {
    UILabel *_label;
    UIVisualEffectView *_visualEffectView;
    NSArray *_labelLayoutConstraints;
    NSInteger _verticalAlignment;
    UIEdgeInsets _contentInsets;
}


@property (retain, nonatomic) PXLabelSpec *spec; // ivar: _spec
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)_configuredText;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonPXMemoriesLabelInitialization;
-(void)_configureLabel;
-(void)updateConstraints;


@end


#endif