// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCOMPATIBILITY_H
#define EKCOMPATIBILITY_H


#import <Foundation/Foundation.h>


@interface EKCompatibility : NSObject



+(BOOL)isProgramSDKAtLeast:(struct ? )arg0 ;
+(BOOL)simulateLegacyBehaviors;
// +(void)perform:(id)arg0 whileSimulatingLegacyBehaviors:(unk)arg1  ;
+(void)performWhileSimulatingLegacyBehaviors:(id)arg0 ;
+(void)setSimulateLegacyBehaviors:(BOOL)arg0 ;


@end


#endif