// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVEVALUATIONPROFILEBUILDER_H
#define CKVEVALUATIONPROFILEBUILDER_H

@class NSSet, KVProfile, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface CKVEvaluationProfileBuilder : NSObject {
    NSSet *_omitItemTypes;
    KVProfile *_primaryProfile;
    NSMutableDictionary *_companionProfiles;
    NSDictionary *_primaryPriors;
    NSMutableDictionary *_companionPriors;
}




-(BOOL)_processRawSpeechProfile:(id)arg0 rawSpeechProfileMetadata:(id)arg1 deviceId:(id)arg2 userId:(id)arg3 error:(*id)arg4 ;
-(BOOL)addCompanionRawSpeechProfile:(id)arg0 rawSpeechProfileMetadata:(id)arg1 deviceId:(id)arg2 userId:(id)arg3 error:(*id)arg4 ;
-(BOOL)setPrimaryRawSpeechProfile:(id)arg0 rawSpeechProfileMetadata:(id)arg1 error:(*id)arg2 ;
-(id)buildWithError:(*id)arg0 ;
-(id)init;
-(id)initWithOmittedItemTypes:(id)arg0 ;


@end


#endif