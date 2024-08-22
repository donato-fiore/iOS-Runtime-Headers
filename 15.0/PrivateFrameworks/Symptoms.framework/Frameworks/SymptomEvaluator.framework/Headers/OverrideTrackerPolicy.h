// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OVERRIDETRACKERPOLICY_H
#define OVERRIDETRACKERPOLICY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OverrideTrackerPolicy : NSObject {
    NSMutableDictionary *_maxConnectionPolicyOverrides;
    NSMutableDictionary *_maxRRCTimePolicyOverrides;
}




+(id)sharedInstance;
-(BOOL)useFullActivityBitmaps;
-(id)init;
-(id)maxConnectionPolicyForTarget:(id)arg0 ;
-(id)maxRRCTimePolicyForTarget:(id)arg0 ;


@end


#endif