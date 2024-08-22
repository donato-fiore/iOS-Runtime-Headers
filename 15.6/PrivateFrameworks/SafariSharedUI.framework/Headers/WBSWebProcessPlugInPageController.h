// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBPROCESSPLUGINPAGECONTROLLER_H
#define WBSWEBPROCESSPLUGINPAGECONTROLLER_H

@class WKWebProcessPlugInBrowserContextController, NSString, WKWebProcessPlugInFrame;
@protocol WKWebProcessPlugInLoadDelegate;

#import <Foundation/Foundation.h>

#import "WBSWebProcessPlugIn.h"

@interface WBSWebProcessPlugInPageController : NSObject <WKWebProcessPlugInLoadDelegate>



@property (readonly, nonatomic) WKWebProcessPlugInBrowserContextController *browserContextController; // ivar: _browserContextController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WKWebProcessPlugInFrame *mainFrame;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBSWebProcessPlugIn *webProcessPlugIn; // ivar: _webProcessPlugIn


-(id)init;
-(id)initWithPlugIn:(id)arg0 contextController:(id)arg1 ;
-(void)willDestroyBrowserContextController:(id)arg0 ;


@end


#endif