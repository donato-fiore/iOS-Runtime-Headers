// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSUSERDEFAULTOBSERVATION_H
#define WBSUSERDEFAULTOBSERVATION_H

@class NSUserDefaults, NSString;
@protocol WBSUserDefaultObservation, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSUserDefaultObservation : NSObject <WBSUserDefaultObservation>

 {
    NSUserDefaults *_defaults;
    id *_handler;
    NSString *_key;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithUserDefaults:(id)arg0 key:(id)arg1 queue:(id)arg2 notifyForInitialValue:(BOOL)arg3 handler:(id)arg4 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif