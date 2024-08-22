// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKWEBPROCESSPLUGINPAGEGROUP_H
#define WKWEBPROCESSPLUGINPAGEGROUP_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKWebProcessPlugInPageGroup : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebPageGroupProxy> _bundlePageGroup;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif