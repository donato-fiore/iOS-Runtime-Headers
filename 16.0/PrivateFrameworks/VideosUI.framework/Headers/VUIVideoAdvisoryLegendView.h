// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIVIDEOADVISORYLEGENDVIEW_H
#define VUIVIDEOADVISORYLEGENDVIEW_H

@class UIView, NSString;


#import "VUIVideoAdvisoryViewLayout.h"
#import "VUILabel.h"

@interface VUIVideoAdvisoryLegendView : UIView

@property (retain, nonatomic) VUIVideoAdvisoryViewLayout *layout; // ivar: _layout
@property (copy, nonatomic) NSString *legendDescription;
@property (retain, nonatomic) VUILabel *legendDescriptionLabel; // ivar: _legendDescriptionLabel
@property (copy, nonatomic) NSString *legendName;
@property (retain, nonatomic) VUILabel *legendNameLabel; // ivar: _legendNameLabel


-(id)initWithLayout:(id)arg0 ;
-(struct CGSize )legendNameSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif