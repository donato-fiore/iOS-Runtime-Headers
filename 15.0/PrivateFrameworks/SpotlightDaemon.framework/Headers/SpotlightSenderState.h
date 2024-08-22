// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPOTLIGHTSENDERSTATE_H
#define SPOTLIGHTSENDERSTATE_H

@class CSReceiverServerPreferences;

#import <Foundation/Foundation.h>


@interface SpotlightSenderState : NSObject

@property (readonly, nonatomic) CSReceiverServerPreferences *serverPreferences; // ivar: _serverPreferences


-(BOOL)clientDisabled:(NSInteger)arg0 ;
-(id)init;
-(void)_updateFromPreferences;


@end


#endif