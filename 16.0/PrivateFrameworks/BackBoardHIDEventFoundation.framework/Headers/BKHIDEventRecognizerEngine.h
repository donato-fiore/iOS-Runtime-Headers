// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKHIDEVENTRECOGNIZERENGINE_H
#define BKHIDEVENTRECOGNIZERENGINE_H

@class NSMutableArray, NSString;
@protocol BKHIDEventProcessor;

#import <Foundation/Foundation.h>


@interface BKHIDEventRecognizerEngine : NSObject <BKHIDEventProcessor>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableArray *blocks; // ivar: _blocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *recognizers; // ivar: _recognizers
@property (readonly) Class superclass;


-(?)processEvent:(?)arg0 senderdispatcher;
-(id)init;
-(void)addRecognizer:(id)arg0 recognitionBlock:(id)arg1 ;
-(void)removeRecognizer:(id)arg0 ;


@end


#endif