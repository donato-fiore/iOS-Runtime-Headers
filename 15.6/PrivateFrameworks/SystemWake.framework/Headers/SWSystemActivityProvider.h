// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWSYSTEMACTIVITYPROVIDER_H
#define SWSYSTEMACTIVITYPROVIDER_H

@class NSString;
@protocol SWSystemActivityProviding;

#import <Foundation/Foundation.h>


@interface SWSystemActivityProvider : NSObject <SWSystemActivityProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedProvider;
-(NSUInteger)getMachContinuousKernelWakeTime;
-(id)createTimerWithIdentifier:(id)arg0 ;
-(id)declareSystemActivityWithName:(id)arg0 ;
-(void)releaseAssertionID:(unsigned int)arg0 ;


@end


#endif