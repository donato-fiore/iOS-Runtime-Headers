// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPLINKVIEWCOMPONENTS_H
#define LPLINKVIEWCOMPONENTS_H

@class UIView;

#import <Foundation/Foundation.h>

#import "LPImageView.h"
#import "LPCaptionBarView.h"
#import "LPContactsBadgeView.h"
#import "LPDomainNameIndicator.h"
#import "LPComponentView.h"
#import "LPQuoteView.h"

@interface LPLinkViewComponents : NSObject

@property (retain, nonatomic) LPImageView *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) LPCaptionBarView *captionBar; // ivar: _captionBar
@property (retain, nonatomic) LPContactsBadgeView *contactsBadge; // ivar: _contactsBadge
@property (retain, nonatomic) LPDomainNameIndicator *domainNameIndicator; // ivar: _domainNameIndicator
@property (retain, nonatomic) LPComponentView *media; // ivar: _media
@property (retain, nonatomic) UIView *mediaBackground; // ivar: _mediaBackground
@property (retain, nonatomic) LPCaptionBarView *mediaBottomCaptionBar; // ivar: _mediaBottomCaptionBar
@property (retain, nonatomic) LPCaptionBarView *mediaTopCaptionBar; // ivar: _mediaTopCaptionBar
@property (retain, nonatomic) LPQuoteView *quote; // ivar: _quote


-(void)applyToAllViews:(id)arg0 ;


@end


#endif