// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPCONTEXTUALIZERUTILITIES_H
#define UPCONTEXTUALIZERUTILITIES_H


#import <Foundation/Foundation.h>


@interface UPContextualizerUtilities : NSObject



+(BOOL)hasTopCandidate:(id)arg0 excedingProbability:(CGFloat)arg1 matchingOneOfIntents:(id)arg2 ;
+(id)buildPayloadResultFromQuery:(id)arg0 modelIdentifier:(id)arg1 intent:(id)arg2 entityName:(id)arg3 serializer:(id)arg4 ;
+(id)createConfirmOrRejectedDialogActsFor:(id)arg0 reference:(id)arg1 ;
+(id)entityLabelsFromCandidate:(id)arg0 ;
+(id)filterResult:(id)arg0 byEntityName:(id)arg1 serializer:(id)arg2 ;
+(id)filterResult:(id)arg0 serializer:(id)arg1 predicate:(id)arg2 ;
+(id)resultFromResult:(id)arg0 withNewIntent:(id)arg1 ;


@end


#endif