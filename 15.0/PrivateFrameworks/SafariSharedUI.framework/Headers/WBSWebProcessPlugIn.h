// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBPROCESSPLUGIN_H
#define WBSWEBPROCESSPLUGIN_H

@class NSMapTable, NSString, WKWebProcessPlugInController, NSArray;
@protocol WKWebProcessPlugIn;

#import <Foundation/Foundation.h>

#import "WBSSearchProvider.h"

@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn>

 {
    NSMapTable *_browserContextControllersToWebProcessPlugInPageControllers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSSearchProvider *defaultSearchProvider;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger parsecABGroupIdentifier;
@property (readonly, nonatomic, getter=isParsecABTestingEnabled) BOOL parsecABTestingEnabled;
@property (readonly, nonatomic) WKWebProcessPlugInController *plugInController; // ivar: _plugInController
@property (readonly, nonatomic) NSArray *searchEnginesForRedirectToSafeSearch;
@property (readonly) Class superclass;


-(id)pageControllerWithBrowserContextController:(id)arg0 ;
-(void)didCreatePageController:(id)arg0 forBrowserContextController:(id)arg1 ;
-(void)webProcessPlugIn:(id)arg0 didCreateBrowserContextController:(id)arg1 ;
-(void)webProcessPlugIn:(id)arg0 initializeWithObject:(id)arg1 ;
-(void)webProcessPlugIn:(id)arg0 willDestroyBrowserContextController:(id)arg1 ;
-(void)willDestroyPageController:(id)arg0 forBrowserContextController:(id)arg1 ;


@end


#endif