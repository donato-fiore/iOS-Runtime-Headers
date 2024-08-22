// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVUSERPROFILETOOLS_H
#define CKVUSERPROFILETOOLS_H


#import <Foundation/Foundation.h>


@interface CKVUserProfileTools : NSObject



+(id)convertRawSpeechProfile:(id)arg0 metadata:(id)arg1 deviceId:(id)arg2 userId:(id)arg3 omitItemTypes:(id)arg4 error:(*id)arg5 ;
+(id)localeFromRawSpeechProfile:(id)arg0 error:(*id)arg1 ;
+(id)mapItemIdsToPriorsFromMetadata:(id)arg0 ;
+(id)mergeMultiUserPrimaryProfile:(id)arg0 withCompanionProfiles:(id)arg1 error:(*id)arg2 ;
+(id)parseRawSpeechProfileMetadata:(id)arg0 error:(*id)arg1 ;
+(id)vocabularyItemsOfType:(NSInteger)arg0 fromRawSpeechProfile:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;


@end


#endif