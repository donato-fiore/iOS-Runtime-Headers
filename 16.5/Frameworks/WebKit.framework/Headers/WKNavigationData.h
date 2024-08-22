// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKNAVIGATIONDATA_H
#define WKNAVIGATIONDATA_H

@class NSString, NSURL, NSURLRequest, NSURLResponse;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKNavigationData : NSObject <WKObject>

 {
    ObjectStorage<API::NavigationData> _data;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSURL *destinationURL;
@property (readonly) NSUInteger hash;
@property (readonly) NSURLRequest *originalRequest;
@property (readonly) NSURLResponse *response;
@property (readonly) Class superclass;
@property (readonly) NSString *title;


-(void)dealloc;


@end


#endif