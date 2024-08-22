// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFDUMPCATEGORY_H
#define HMFDUMPCATEGORY_H

@class NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMFDumpCategory : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;


@end


#endif