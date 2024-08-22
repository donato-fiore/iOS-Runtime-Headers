// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVUSERPROFILETOOLS_H
#define CKVUSERPROFILETOOLS_H


#import <Foundation/Foundation.h>


@interface CKVUserProfileTools : NSObject



+(id)localeFromRawSpeechProfile:(id)arg0 error:(*id)arg1 ;
+(id)mapItemIdsToPriorsFromMetadata:(id)arg0 ;
+(id)parseRawSpeechProfileMetadata:(id)arg0 error:(*id)arg1 ;
+(id)vocabularyItemsOfType:(NSInteger)arg0 fromRawSpeechProfile:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;


@end


#endif