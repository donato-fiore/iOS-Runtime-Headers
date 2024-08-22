// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKNAVIGATIONACTION_H
#define WKNAVIGATIONACTION_H

@class NSURL, NSString, NSURLRequest;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "_WKHitTestResult.h"
#import "WKNavigation.h"
#import "_WKUserInitiatedAction.h"
#import "WKFrameInfo.h"

@interface WKNavigationAction : NSObject <WKObject>

 {
    ObjectStorage<API::NavigationAction> _navigationAction;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) BOOL _canHandleRequest;
@property (readonly, nonatomic) CGPoint _clickLocationInRootViewCoordinates;
@property (readonly, nonatomic) BOOL _hasOpener;
@property (readonly, nonatomic) _WKHitTestResult *_hitTestResult;
@property (readonly, nonatomic) BOOL _isRedirect;
@property (readonly, nonatomic) WKNavigation *_mainFrameNavigation;
@property (readonly, nonatomic) NSURL *_originalURL;
@property (readonly, nonatomic) BOOL _shouldOpenAppLinks;
@property (readonly, nonatomic) BOOL _shouldOpenExternalSchemes;
@property (readonly, nonatomic) BOOL _shouldOpenExternalURLs;
@property (readonly, nonatomic) BOOL _shouldPerformDownload;
@property (readonly, nonatomic) NSInteger _syntheticClickType;
@property (readonly, nonatomic, getter=_isUserInitiated) BOOL _userInitiated;
@property (readonly, nonatomic) _WKUserInitiatedAction *_userInitiatedAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger modifierFlags;
@property (readonly, nonatomic) NSInteger navigationType;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) BOOL shouldPerformDownload;
@property (readonly, copy, nonatomic) WKFrameInfo *sourceFrame;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) WKFrameInfo *targetFrame;


-(void)_storeSKAdNetworkAttribution;
-(void)dealloc;


@end


#endif