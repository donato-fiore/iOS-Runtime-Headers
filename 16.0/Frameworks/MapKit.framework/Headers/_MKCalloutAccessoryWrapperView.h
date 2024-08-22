// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKCALLOUTACCESSORYWRAPPERVIEW_H
#define _MKCALLOUTACCESSORYWRAPPERVIEW_H

@class UIView, UIView<_MKCalloutAccessoryView>, NSString;
@protocol _MKCalloutAccessoryView;



@interface _MKCalloutAccessoryWrapperView : UIView <_MKCalloutAccessoryView>

 {
    UIView<_MKCalloutAccessoryView> *_view;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_mapkit_accessoryControlToExtendWithCallout;
-(id)initWithView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif