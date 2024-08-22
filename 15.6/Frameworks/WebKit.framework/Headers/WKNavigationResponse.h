// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKNAVIGATIONRESPONSE_H
#define WKNAVIGATIONRESPONSE_H

@class NSString, NSURLRequest, NSURLResponse;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "WKFrameInfo.h"

@interface WKNavigationResponse : NSObject <WKObject>

 {
    ObjectStorage<API::NavigationResponse> _navigationResponse;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) NSString *_downloadAttribute;
@property (readonly, nonatomic) WKFrameInfo *_frame;
@property (readonly, nonatomic) NSURLRequest *_request;
@property (readonly, nonatomic) BOOL canShowMIMEType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForMainFrame) BOOL forMainFrame;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURLResponse *response;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif