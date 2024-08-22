// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBREADCRUMBACTIONCONTEXT_H
#define SBBREADCRUMBACTIONCONTEXT_H

@class LSAppLink, NSDictionary, NSString, UISystemNavigationAction;

#import <Foundation/Foundation.h>


@interface SBBreadcrumbActionContext : NSObject {
    BOOL _didCaptureContext;
    NSUInteger _lastSource;
    BOOL _wasFromSpotlight;
    BOOL _wasFromAssistant;
    LSAppLink *_appLink;
    NSDictionary *_appLinkState;
    NSString *_previousSideBundleId;
    NSString *_breadcrumbAppBundleID;
    NSString *_breadcrumbSceneID;
    NSString *_primaryTitle;
    NSString *_secondaryTitle;
    NSUInteger _rightType;
    NSUInteger _leftType;
    UISystemNavigationAction *_action;
    NSDictionary *_destinationContexts;
    id *_responseHandler;
}




-(void)dealloc;


@end


#endif