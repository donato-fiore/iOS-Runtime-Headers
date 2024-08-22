// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFWEBEXTENSIONPERMISSIONBANNER_H
#define _SFWEBEXTENSIONPERMISSIONBANNER_H

@class SFLinkBanner;



@interface _SFWebExtensionPermissionBanner : SFLinkBanner

@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler


-(id)initWithExtension:(id)arg0 ;
-(id)preferredButtonBackgroundColor;
-(id)preferredButtonTintColor;


@end


#endif