// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCPROMOTEDCONTENTVIEW_H
#define APPCPROMOTEDCONTENTVIEW_H

@class UIView, NSString;
@protocol NewsTransparencyViewControllerDelegate, SFSafariViewControllerDelegate;



@interface APPCPromotedContentView : UIView <NewsTransparencyViewControllerDelegate, SFSafariViewControllerDelegate>

 {
    ? privacyMarkerView;
    ? dimmerView;
    ? customPrivacyHandling;
    ? tapGestureRecognizer;
    ? expandedAdTapGestureRecognizer;
    ? expandedAdFrame;
    ? visiblePercentage;
    ? promotedContent;
    ? lastPerformedAction;
    ? shouldBlockNavigation;
    ? tapWasRecognized;
    ? interactionDelegate;
    ? interactionPresentationDelegate;
    ? videoTapAction;
    ? videoActionTimestamp;
    ? videoMoreLocation;
    ? shouldCollapseOnRotation;
    ? placement;
    ? overriddenPrivacyMarkerPosition;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic) CGRect frame;
@property (nonatomic) NSInteger readiness; // ivar: readiness


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)newsTransparencyViewControllerDidDismiss:(id)arg0 ;
-(void)safariViewControllerDidFinish:(id)arg0 ;
-(void)sizeCategoryChanged:(id)arg0 ;
-(void)tapRecognized:(id)arg0 ;
-(void)tappedPrivacyMarker:(id)arg0 ;


@end


#endif