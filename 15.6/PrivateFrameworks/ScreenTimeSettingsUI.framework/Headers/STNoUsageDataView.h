// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STNOUSAGEDATAVIEW_H
#define STNOUSAGEDATAVIEW_H

@class UIView, UILabel;



@interface STNoUsageDataView : UIView

@property (nonatomic, getter=isLocalDevice) BOOL localDevice; // ivar: _localDevice
@property (readonly, nonatomic) UILabel *noDataDetailTextLabel; // ivar: _noDataDetailTextLabel


-(id)initWithPreferredFontTextStyle:(id)arg0 ;


@end


#endif