// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFWEBPROCESSSHARINGLINKEXTRACTOR_H
#define _SFWEBPROCESSSHARINGLINKEXTRACTOR_H

@class _WKRemoteObjectInterface;
@protocol _SFWebProcessSharingLinkExtractor;

#import <Foundation/Foundation.h>

#import "_SFWebProcessPlugInPageController.h"

@interface _SFWebProcessSharingLinkExtractor : NSObject <_SFWebProcessSharingLinkExtractor>

 {
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_sharingLinkExtractorInterface;
}




-(id)_extractCanonicalLinkWithInjectedObject:(id)arg0 ;
-(id)_extractDominantIFrameWithInjectedObject:(id)arg0 ;
-(id)_extractSharingLink;
-(id)_injectedLinkExtractorSourceString;
-(id)initWithPageController:(id)arg0 ;
-(void)_setUpRemoteInterface;
-(void)_withInjectedLinkExtractorObjectInFrame:(id)arg0 callback:(id)arg1 ;
-(void)fetchSharingLinkWithCompletionHandler:(id)arg0 ;


@end


#endif