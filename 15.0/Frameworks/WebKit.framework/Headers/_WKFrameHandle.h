// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKFRAMEHANDLE_H
#define _WKFRAMEHANDLE_H

@class NSString;
@protocol WKObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _WKFrameHandle : NSObject <WKObject, NSCopying, NSSecureCoding>

 {
    ObjectStorage<API::FrameHandle> _frameHandle;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger frameID;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif