// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAPPLINKBANNER_H
#define SFAPPLINKBANNER_H

@class WBSAppLink;


#import "SFLinkBanner.h"

@interface SFAppLinkBanner : SFLinkBanner

@property (readonly, nonatomic) WBSAppLink *appLink; // ivar: _appLink


-(id)initWithAppLink:(id)arg0 openActionHandler:(id)arg1 ;


@end


#endif