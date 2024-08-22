// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INREADANNOUNCEMENTINTENT_H
#define INREADANNOUNCEMENTINTENT_H

@class NSString;
@protocol UNNotificationContentProviding, INReadAnnouncementIntentExport;


#import "INIntent.h"

@interface INReadAnnouncementIntent : INIntent <UNNotificationContentProviding, INReadAnnouncementIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger readType;
@property (readonly, copy, nonatomic) NSString *startAnnouncementIdentifier;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger userNotificationType;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithReadType:(NSInteger)arg0 startAnnouncementIdentifier:(id)arg1 userNotificationType:(NSInteger)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif