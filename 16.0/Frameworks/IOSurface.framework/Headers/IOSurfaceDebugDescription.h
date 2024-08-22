// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOSURFACEDEBUGDESCRIPTION_H
#define IOSURFACEDEBUGDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IOSurfaceDebugDescription : NSObject

@property (readonly) NSUInteger allocationSize;
@property (readonly) NSUInteger dirtySize;
@property (readonly) unsigned int height;
@property (readonly) NSString *name;
@property (readonly) unsigned int pixelFormat;
@property (readonly) NSString *pixelFormatString;
@property (readonly) NSUInteger residentSize;
@property (readonly) unsigned int surfaceID;
@property (readonly) NSUInteger virtualAddress;
@property (readonly) unsigned int width;


+(id)surfaceDescriptions;


@end


#endif