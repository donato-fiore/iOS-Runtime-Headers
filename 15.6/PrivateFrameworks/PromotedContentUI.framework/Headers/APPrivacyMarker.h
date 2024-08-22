// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPRIVACYMARKER_H
#define APPRIVACYMARKER_H

@class UIButton;
@protocol APPCVisibilityIgnorable;



@interface APPrivacyMarker : UIButton <APPCVisibilityIgnorable>

 {
    ? titleLabelRegularFontSize;
    ? markerLabel;
    ? markerView;
    ? privacyMarkerType;
    ? privacyMarkerPosition;
    ? minimumTappableSize;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)sizeCategoryChanged:(id)arg0 ;
-(void)systemColorStatusChanged:(id)arg0 ;


@end


#endif