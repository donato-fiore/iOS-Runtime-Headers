// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEFILEHANDLE_H
#define NEFILEHANDLE_H

@class NSFileHandle;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NEFileHandle : NSObject

@property (readonly) NSObject<OS_xpc_object> *dictionary;
@property (readonly) NSFileHandle *handle; // ivar: _handle
@property (readonly) BOOL launchOwnerWhenReadable; // ivar: _launchOwnerWhenReadable
@property (readonly) NSUInteger type;


-(id)initFromDictionary:(id)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 launchOwnerWhenReadable:(BOOL)arg1 ;


@end


#endif