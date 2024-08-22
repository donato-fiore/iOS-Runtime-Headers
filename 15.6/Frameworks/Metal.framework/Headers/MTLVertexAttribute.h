// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLVERTEXATTRIBUTE_H
#define MTLVERTEXATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTLVertexAttribute : NSObject

@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSUInteger attributeIndex;
@property (readonly) NSUInteger attributeType;
@property (readonly) NSString *name;
@property (readonly, getter=isPatchControlPointData) BOOL patchControlPointData;
@property (readonly, getter=isPatchData) BOOL patchData;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif