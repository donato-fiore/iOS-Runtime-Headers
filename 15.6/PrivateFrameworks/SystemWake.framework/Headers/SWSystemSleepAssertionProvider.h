// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWSYSTEMSLEEPASSERTIONPROVIDER_H
#define SWSYSTEMSLEEPASSERTIONPROVIDER_H

@class NSString;
@protocol SWSystemSleepAssertionProviding;

#import <Foundation/Foundation.h>


@interface SWSystemSleepAssertionProvider : NSObject <SWSystemSleepAssertionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedProvider;
-(id)acquirePreventSystemSleepAssertionWithIdentifier:(id)arg0 ;
-(id)acquireSystemActivityAssertionWithIdentifier:(id)arg0 ;


@end


#endif