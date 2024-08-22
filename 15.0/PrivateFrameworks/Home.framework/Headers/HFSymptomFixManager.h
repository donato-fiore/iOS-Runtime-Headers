// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSYMPTOMFIXMANAGER_H
#define HFSYMPTOMFIXMANAGER_H

@class NSString, NSMutableSet;
@protocol HMSymptomFixSessionDelegate;

#import <Foundation/Foundation.h>


@interface HFSymptomFixManager : NSObject <HMSymptomFixSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *items; // ivar: _items
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)anySymptomIsBeingFixedForFixableObject:(id)arg0 ;
-(NSInteger)fixStateForSymptom:(id)arg0 accessory:(id)arg1 ;
-(id)_itemForFixSession:(id)arg0 ;
-(id)_itemForSymptom:(id)arg0 accessory:(id)arg1 ;
-(id)init;
-(void)fixSession:(id)arg0 didChangeState:(NSInteger)arg1 ;
-(void)fixSymptom:(id)arg0 forFixableObject:(id)arg1 presentingViewController:(id)arg2 ;


@end


#endif