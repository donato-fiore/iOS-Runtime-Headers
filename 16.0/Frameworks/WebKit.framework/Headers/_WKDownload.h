// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKDOWNLOAD_H
#define _WKDOWNLOAD_H

@class NSString, NSArray, NSURLRequest, NSData;
@protocol WKObject, NSCopying;

#import <Foundation/Foundation.h>

#import "WKFrameInfo.h"
#import "WKWebView.h"

@interface _WKDownload : NSObject <WKObject, NSCopying>

 {
    RetainPtr<WKDownload> _download;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WKFrameInfo *originatingFrame;
@property (readonly, weak, nonatomic) WKWebView *originatingWebView;
@property (readonly, copy, nonatomic) NSArray *redirectChain;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSData *resumeData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wasUserInitiated;


+(id)downloadWithDownload:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDownload2:(id)arg0 ;
-(void)cancel;
-(void)publishProgressAtURL:(id)arg0 ;


@end


#endif