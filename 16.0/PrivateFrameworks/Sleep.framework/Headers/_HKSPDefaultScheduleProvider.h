// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSPDEFAULTSCHEDULEPROVIDER_H
#define _HKSPDEFAULTSCHEDULEPROVIDER_H

@class NSString;
@protocol HKSPSuggestionProvider;

#import <Foundation/Foundation.h>


@interface _HKSPDefaultScheduleProvider : NSObject <HKSPSuggestionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)hksp_suggestedSleepScheduleWithCompletion:(id)arg0 ;


@end


#endif