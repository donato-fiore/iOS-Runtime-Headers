// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKRESOURCELOADINFO_H
#define _WKRESOURCELOADINFO_H

@class NSString, NSDate, NSURL;
@protocol WKObject, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_WKFrameHandle.h"

@interface _WKResourceLoadInfo : NSObject <WKObject, NSSecureCoding>

 {
    ObjectStorage<API::ResourceLoadInfo> _info;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *eventTimestamp;
@property (readonly, nonatomic) _WKFrameHandle *frame;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL loadedFromCache;
@property (readonly, nonatomic) NSString *originalHTTPMethod;
@property (readonly, nonatomic) NSURL *originalURL;
@property (readonly, nonatomic) _WKFrameHandle *parentFrame;
@property (readonly, nonatomic) NSUInteger resourceLoadID;
@property (readonly, nonatomic) NSInteger resourceType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif