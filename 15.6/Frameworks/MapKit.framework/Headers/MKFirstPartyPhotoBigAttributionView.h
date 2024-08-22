// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFIRSTPARTYPHOTOBIGATTRIBUTIONVIEW_H
#define MKFIRSTPARTYPHOTOBIGATTRIBUTIONVIEW_H

@class UIImageView, UILabel, NSString, UIImage;
@protocol MKPhotoBigAttributionViewSubclass;


#import "MKPhotoBigAttributionView.h"

@interface MKFirstPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass>

 {
    UIImageView *_glyphView;
    UILabel *_titleLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImage *glyphImage;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *titleText;


-(id)initWithContext:(NSInteger)arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)didEndAnimatingActivityIndicatorView;
-(void)didUpdateAttributionViewType;
-(void)didUpdateMapItem;
-(void)willStartAnimatingActivityIndicatorView;


@end


#endif