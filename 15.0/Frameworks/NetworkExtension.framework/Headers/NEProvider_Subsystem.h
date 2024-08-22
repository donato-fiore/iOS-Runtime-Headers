// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEPROVIDER_SUBSYSTEM_H
#define NEPROVIDER_SUBSYSTEM_H

@class NSString;
@protocol PKModularService;

#import <Foundation/Foundation.h>


@interface NEProvider_Subsystem : NSObject <PKModularService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)initForPlugInKit;


@end


#endif