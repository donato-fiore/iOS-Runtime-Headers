// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCASSISTANTAVAILABILITY_H
#define MPCASSISTANTAVAILABILITY_H


#import <Foundation/Foundation.h>


@interface MPCAssistantAvailability : NSObject



-(NSInteger)assistantStreamingGetAvailability;
-(NSInteger)assistantStreamingGetAvailability:(struct ? )arg0 ;
-(void)assistantRadioGetAvailability:(id)arg0 ;
-(void)assistantRadioGetAvailability:(struct ? )arg0 completion:(id)arg1 ;


@end


#endif