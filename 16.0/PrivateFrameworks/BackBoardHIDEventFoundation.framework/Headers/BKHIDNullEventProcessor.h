// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKHIDNULLEVENTPROCESSOR_H
#define BKHIDNULLEVENTPROCESSOR_H

@class NSString;
@protocol BKHIDEventProcessor;

#import <Foundation/Foundation.h>


@interface BKHIDNullEventProcessor : NSObject <BKHIDEventProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)processEvent:(?)arg0 senderdispatcher;


@end


#endif