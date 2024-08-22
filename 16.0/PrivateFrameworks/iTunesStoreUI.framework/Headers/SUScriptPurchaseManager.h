// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTPURCHASEMANAGER_H
#define SUSCRIPTPURCHASEMANAGER_H



#import "SUScriptObject.h"

@interface SUScriptPurchaseManager : SUScriptObject



+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)init;
-(id)isPurchasedItemIdentifier:(id)arg0 ;
-(id)isPurchasingItemIdentifier:(id)arg0 ;
-(void)_purchaseRequestsChangedNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif