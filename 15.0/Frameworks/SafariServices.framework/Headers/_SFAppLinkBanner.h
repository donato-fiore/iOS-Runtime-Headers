// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFAPPLINKBANNER_H
#define _SFAPPLINKBANNER_H

@class SFLinkBanner, WBSAppLink;



@interface _SFAppLinkBanner : SFLinkBanner

@property (readonly, nonatomic) WBSAppLink *appLink; // ivar: _appLink


-(id)initWithAppLink:(id)arg0 openActionHandler:(id)arg1 ;


@end


#endif