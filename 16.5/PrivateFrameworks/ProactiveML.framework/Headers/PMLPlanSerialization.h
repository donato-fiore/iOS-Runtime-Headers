// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLPLANSERIALIZATION_H
#define PMLPLANSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface PMLPlanSerialization : NSObject



+(id)planFromData:(id)arg0 store:(id)arg1 trainingNetworkPath:(id)arg2 ;
+(id)planFromData:(id)arg0 withArgs:(id)arg1 ;
+(id)planFromData:(id)arg0 withStore:(id)arg1 ;
+(id)serializePlan:(id)arg0 ;
-(id)init;


@end


#endif