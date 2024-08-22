// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEINFOPHONENUMBERVIEW_H
#define MKPLACEINFOPHONENUMBERVIEW_H



#import "MKPlaceInfoContactRowView.h"
#import "_MKUILabel.h"

@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView {
    _MKUILabel *_optsOutOfAdsView;
}


@property (nonatomic) BOOL optsOutOfAds; // ivar: _optsOutOfAds


-(Class)_labeledValueExpectedValueType;
-(id)_icon;
-(id)_iconAccessibilityLabel;
-(id)_valueString;
-(id)draggableContent;
-(id)formatPhoneNumber:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)analyticsTarget;


@end


#endif