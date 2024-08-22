// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPURCHASABLEAPPITEM_H
#define SSPURCHASABLEAPPITEM_H



#import "SSPurchasableItem.h"

@interface SSPurchasableAppItem : SSPurchasableItem



+(id)allItemsFromDatabase:(id)arg0 forAccount:(NSInteger)arg1 sortedBy:(id)arg2 sortAscending:(BOOL)arg3 ;
+(id)allPropertyKeys;
+(id)databaseTable;
+(id)itemsFromDatabase:(id)arg0 forAccount:(NSInteger)arg1 matching:(id)arg2 sortedBy:(id)arg3 sortAscending:(BOOL)arg4 ;
+(id)sortByNameKey;
-(BOOL)hasMessagesExtension;
-(BOOL)is32BitOnly;
-(BOOL)isFamilyShareable;
-(BOOL)isHiddenFromSpringBoard;
-(BOOL)isNewsstand;
-(BOOL)isPreorder;
-(BOOL)supportsIPad;
-(BOOL)supportsIPhone;
-(NSInteger)contentRatingFlags;
-(NSInteger)iTunesVersion;
-(id)accountIdentifier;
-(id)bundleID;
-(id)category;
-(id)companyName;
-(id)description;
-(id)humanReadableVersion;
-(id)iconTitle;
-(id)iconURL;
-(id)longTitle;
-(id)ovalIconURLString;
-(id)redownloadParams;
-(id)requiredCapabilitiesString;
-(unsigned int)minimumOS;


@end


#endif