// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKHIDEVENTSEQUENCERECOGNIZER_H
#define BKHIDEVENTSEQUENCERECOGNIZER_H

@class NSString, NSArray;
@protocol BKHIDEventRecognizer;

#import <Foundation/Foundation.h>


@interface BKHIDEventSequenceRecognizer : NSObject <BKHIDEventRecognizer>

 {
    NSInteger _descriptorIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *descriptors; // ivar: _descriptors
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldConsumeEvents; // ivar: _shouldConsumeEvents
@property (readonly) Class superclass;


+(id)recognizerForEventDescriptor:(id)arg0 ;
+(id)recognizerForEventDescriptors:(id)arg0 ;
-(NSInteger)processEvent:(struct __IOHIDEvent *)arg0 shouldConsume:(*BOOL)arg1 ;


@end


#endif