// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKFOLLOWUPFACTORYIMPL_H
#define AKFOLLOWUPFACTORYIMPL_H

@class NSString;
@protocol AKFollowUpItemFactory;

#import <Foundation/Foundation.h>


@interface AKFollowUpFactoryImpl : NSObject <AKFollowUpItemFactory>



@property (copy, nonatomic) NSString *bundleIconName; // ivar: _bundleIconName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *representingBundlePath; // ivar: _representingBundlePath
@property (readonly) Class superclass;


-(BOOL)IsFollowUpItemNotificationForced:(id)arg0 ;
-(id)_actionFromInfo:(id)arg0 pushMessageInfo:(id)arg1 ;
-(id)_actionsFromPayload:(id)arg0 pushMessageInfo:(id)arg1 ;
-(id)_clearAction;
-(id)_itemFromPayload:(id)arg0 pushMessageInfo:(id)arg1 withAltDSID:(id)arg2 ;
-(id)_notificationFromPayload:(id)arg0 pushMessageInfo:(id)arg1 ;
-(id)actionWithTitle:(id)arg0 andActionKey:(id)arg1 ;
-(id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg0 ;
-(id)itemsForAltDSID:(id)arg0 pushMessageInfo:(id)arg1 fromIDMSPayload:(id)arg2 ;


@end


#endif