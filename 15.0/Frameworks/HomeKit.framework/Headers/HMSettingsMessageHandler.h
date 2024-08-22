// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSETTINGSMESSAGEHANDLER_H
#define HMSETTINGSMESSAGEHANDLER_H


#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMSettingsMessageHandler : NSObject

@property (retain) _HMContext *context; // ivar: _context


-(void)sendUpdateValueMessage:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif