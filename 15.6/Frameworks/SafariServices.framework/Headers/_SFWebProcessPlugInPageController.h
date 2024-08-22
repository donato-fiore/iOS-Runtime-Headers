// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFWEBPROCESSPLUGINPAGECONTROLLER_H
#define _SFWEBPROCESSPLUGINPAGECONTROLLER_H

@class WBSWebProcessPlugInPageController;



@interface _SFWebProcessPlugInPageController : WBSWebProcessPlugInPageController



+(id)pageControllerForBrowserContextController:(id)arg0 ;
-(BOOL)isNetworkReachable;
-(id)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 willSendRequestForResource:(NSUInteger)arg2 request:(id)arg3 redirectResponse:(id)arg4 ;


@end


#endif