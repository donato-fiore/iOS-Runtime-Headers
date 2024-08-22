// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSPHOTOSUGGESTIONS_H
#define _PSPHOTOSUGGESTIONS_H


#import <Foundation/Foundation.h>


@interface _PSPhotoSuggestions : NSObject



+(id)contactAndMDPersonIDsByAssetPresenceInAttachments:(id)arg0 visualViewHandle:(id)arg1 ;
+(id)partitionPeopleSuggestionProxiesFromPhotosByAssetPresenceInAttachments:(id)arg0 photoSuggestedPeople:(id)arg1 contactIDsInAssets:(id)arg2 ;
+(id)photoSuggestedPeopleFromAttachments:(id)arg0 ;
+(id)suggestionTemplateForPhotoContactIdWithMessages:(id)arg0 cdInteraction:(id)arg1 reason:(id)arg2 reasonType:(id)arg3 ;


@end


#endif