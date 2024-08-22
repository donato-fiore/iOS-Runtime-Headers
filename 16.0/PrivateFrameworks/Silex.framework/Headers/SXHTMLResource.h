// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXHTMLRESOURCE_H
#define SXHTMLRESOURCE_H

@class NSString, NSURL;
@protocol SXHTMLResource;


#import "SXResource.h"

@interface SXHTMLResource : SXResource <SXHTMLResource>



@property (readonly, nonatomic) NSString *HTML;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;




@end


#endif