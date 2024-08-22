// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLATTRIBUTE_H
#define MTLATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTLAttribute : NSObject

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