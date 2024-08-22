// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKHIDEVENTPROCESSORREGISTRY_H
#define BKHIDEVENTPROCESSORREGISTRY_H

@class NSMutableDictionary, NSString;
@protocol BKHIDEventProcessorRegistering;

#import <Foundation/Foundation.h>


@interface BKHIDEventProcessorRegistry : NSObject <BKHIDEventProcessorRegistering>

 {
    NSMutableDictionary *_eventProcessorsByClassName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)eventProcessorOfClass:(Class)arg0 ;
-(id)init;
-(void)addEventProcessor:(id)arg0 ;


@end


#endif