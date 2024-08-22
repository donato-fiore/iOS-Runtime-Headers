// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKHIDDEFAULTEVENTPROCESSOR_H
#define BKHIDDEFAULTEVENTPROCESSOR_H

@class NSString;
@protocol BKHIDEventProcessor;

#import <Foundation/Foundation.h>


@interface BKHIDDefaultEventProcessor : NSObject <BKHIDEventProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)processEvent:(?)arg0 senderdispatcher;


@end


#endif