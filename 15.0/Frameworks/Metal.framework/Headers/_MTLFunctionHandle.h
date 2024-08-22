// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MTLFUNCTIONHANDLE_H
#define _MTLFUNCTIONHANDLE_H

@class NSString;
@protocol MTLFunctionHandle, MTLDevice;

#import <Foundation/Foundation.h>


@interface _MTLFunctionHandle : NSObject <MTLFunctionHandle>

 {
    NSUInteger _functionType;
    NSString *_name;
    id<MTLDevice> *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger functionType;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)initWithFunctionType:(NSUInteger)arg0 name:(id)arg1 device:(id)arg2 ;
-(void)dealloc;


@end


#endif