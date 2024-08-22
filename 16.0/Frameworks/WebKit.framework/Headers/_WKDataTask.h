// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKDATATASK_H
#define _WKDATATASK_H

@class NSString;
@protocol WKObject, _WKDataTaskDelegate;

#import <Foundation/Foundation.h>

#import "WKWebView.h"

@interface _WKDataTask : NSObject <WKObject>

 {
    ObjectStorage<API::DataTask> _dataTask;
    RetainPtr<id<_WKDataTaskDelegate>> _delegate;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<_WKDataTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) WKWebView *webView;


-(void)cancel;
-(void)dealloc;


@end


#endif