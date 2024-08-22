// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIDIRECTACTIONCONTEXT_H
#define SIRIDIRECTACTIONCONTEXT_H

@class BBBulletin, UNNotification, NSDictionary;


#import "SiriContext.h"

@interface SiriDirectActionContext : SiriContext

@property (readonly, nonatomic) BBBulletin *bulletin; // ivar: _bulletin
@property (readonly, nonatomic) UNNotification *notification; // ivar: _notification
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload


+(BOOL)supportsSecureCoding;
+(id)appLaunchDirectActionWithAppBundleId:(id)arg0 ;
+(id)mapSearchDirectActionWithAppBundleId:(id)arg0 ;
+(id)mapShareEtaDirectActionWithAppBundleId:(id)arg0 ;
+(id)messageAmbiguousDirectActionWithAppBundleId:(id)arg0 ;
+(id)messageComposeDirectActionWithAppBundleId:(id)arg0 ;
+(id)messageComposeNewThreadDirectActionWithAppBundleId:(id)arg0 fullName:(id)arg1 phoneOrEmailAddress:(id)arg2 ;
+(id)messageReadDirectActionWithAppBundleId:(id)arg0 conversationGUID:(id)arg1 ;
+(id)messageReplyDirectActionWithAppBundleId:(id)arg0 conversationGUID:(id)arg1 ;
+(id)musicSearchDirectActionWithAppBundleId:(id)arg0 ;
+(id)phoneAmbiguousDirectActionWithAppBundleId:(id)arg0 ;
+(id)phoneCallDirectActionWithAppBundleId:(id)arg0 ;
-(NSInteger)_directActionEventFromAppIdsAndIntentIdentifiersOfBulletin:(id)arg0 notification:(id)arg1 ;
-(NSInteger)_directActionEventFromContentTypesOfBulletin:(id)arg0 notification:(id)arg1 ;
-(NSInteger)directActionEvent;
-(id)_initWithDirectActionEvent:(NSInteger)arg0 appBundleId:(id)arg1 conversationGUID:(id)arg2 fullName:(id)arg3 phoneOrEmailAddress:(id)arg4 ;
-(id)_intentIdentifiersFromBulletin:(id)arg0 notification:(id)arg1 ;
-(id)bundleId;
-(id)description;
-(id)initWithBBBulletin:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithUNNotification:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif