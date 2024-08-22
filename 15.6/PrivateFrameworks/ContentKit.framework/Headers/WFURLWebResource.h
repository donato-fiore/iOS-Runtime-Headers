// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFURLWEBRESOURCE_H
#define WFURLWEBRESOURCE_H

@class NSURL;


#import "WFWebResource.h"

@interface WFURLWebResource : WFWebResource

@property (readonly, nonatomic) NSURL *URL;


-(id)initWithURL:(id)arg0 ;
-(id)loadInWKWebView:(id)arg0 ;
-(id)request;


@end


#endif