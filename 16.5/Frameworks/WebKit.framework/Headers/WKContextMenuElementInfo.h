// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKCONTEXTMENUELEMENTINFO_H
#define WKCONTEXTMENUELEMENTINFO_H

@class NSString, NSURL;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKContextMenuElementInfo : NSObject <WKObject>

 {
    ObjectStorage<API::ContextMenuElementInfo> _elementInfo;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *linkURL;
@property (readonly) Class superclass;


-(id)_activatedElementInfo;


@end


#endif