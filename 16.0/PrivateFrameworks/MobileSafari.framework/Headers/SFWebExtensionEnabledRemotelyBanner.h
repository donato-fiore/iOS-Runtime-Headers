// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFWEBEXTENSIONENABLEDREMOTELYBANNER_H
#define SFWEBEXTENSIONENABLEDREMOTELYBANNER_H

@class NSArray;


#import "SFLinkBanner.h"

@interface SFWebExtensionEnabledRemotelyBanner : SFLinkBanner {
    NSArray *_remotelyEnabledExtensions;
}




-(id)initWithExtension:(id)arg0 ;
-(id)preferredButtonBackgroundColor;
-(id)preferredButtonTintColor;
-(void)addExtension:(id)arg0 ;


@end


#endif