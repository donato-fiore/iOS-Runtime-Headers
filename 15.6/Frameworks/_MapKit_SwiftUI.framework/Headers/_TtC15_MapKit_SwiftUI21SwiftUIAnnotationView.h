// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15_MAPKIT_SWIFTUI21SWIFTUIANNOTATIONVIEW_H
#define _TTC15_MAPKIT_SWIFTUI21SWIFTUIANNOTATIONVIEW_H

@class MKAnnotationView;



@interface _TtC15_MapKit_SwiftUI21SwiftUIAnnotationView : MKAnnotationView {
    ? wrappedView;
    ? anchorPoint;
    ? model;
    ? hostView;
}


@property (nonatomic, readonly) UIEdgeInsets safeAreaInsets;


+(BOOL)_wantsViewBasedPositioning;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif