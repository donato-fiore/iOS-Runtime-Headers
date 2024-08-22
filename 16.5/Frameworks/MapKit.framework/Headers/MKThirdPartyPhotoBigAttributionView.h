// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTHIRDPARTYPHOTOBIGATTRIBUTIONVIEW_H
#define MKTHIRDPARTYPHOTOBIGATTRIBUTIONVIEW_H

@class UIView, NSString;
@protocol MKPhotoBigAttributionViewSubclass;


#import "MKPhotoBigAttributionView.h"
#import "_MKUILabel.h"

@interface MKThirdPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass>

 {
    _MKUILabel *_firstLineLabel;
    _MKUILabel *_secondLineLabel;
    UIView *_labelsView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)firstLineLabelFont;
-(id)initWithContext:(NSInteger)arg0 ;
-(id)secondLineLabelFont;
-(void)didEndAnimatingActivityIndicatorView;
-(void)didUpdateAttributionViewType;
-(void)didUpdateMapItem;
-(void)updateInfoAttributionString;
-(void)willStartAnimatingActivityIndicatorView;


@end


#endif