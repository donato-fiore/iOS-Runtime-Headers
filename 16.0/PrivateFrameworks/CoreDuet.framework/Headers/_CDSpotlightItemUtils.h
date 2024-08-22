// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDSPOTLIGHTITEMUTILS_H
#define _CDSPOTLIGHTITEMUTILS_H


#import <Foundation/Foundation.h>


@interface _CDSpotlightItemUtils : NSObject



+(BOOL)contentTypeTree:(id)arg0 conformsToUTIType:(id)arg1 ;
+(NSInteger)getInteractionMechanismForContentUTI:(id)arg0 typeTree:(id)arg1 ;
+(id)_locationMetadataForSearchableItem:(id)arg0 userAction:(id)arg1 ;
+(id)contextDictionaryForSearchableItem:(id)arg0 userAction:(id)arg1 ;
+(id)expectedSupportedUTIs;
+(id)expectedUTIsForMechanism:(NSInteger)arg0 ;
+(id)interactionForSearchableItem:(id)arg0 nsUserName:(id)arg1 ;
+(id)interactionUUIDForSearchableItemWithUID:(id)arg0 bundleID:(id)arg1 ;
+(id)knowledgeEventsForSearchableItem:(id)arg0 userAction:(id)arg1 ;
+(id)messageContextDictionaryForSendMessageIntent:(id)arg0 ;
+(id)querySpotlightItemsWithStartDate:(id)arg0 endDate:(id)arg1 getMail:(BOOL)arg2 getMessages:(BOOL)arg3 ;


@end


#endif