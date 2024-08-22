// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSENDANNOUNCEMENTINTENT_H
#define INSENDANNOUNCEMENTINTENT_H

@class NSString, NSNumber, NSArray;
@protocol INSendAnnouncementIntentExport;


#import "INIntent.h"
#import "INAnnouncement.h"

@interface INSendAnnouncementIntent : INIntent <INSendAnnouncementIntentExport>



@property (readonly, copy, nonatomic) INAnnouncement *announcement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *isReply;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(NSInteger)_preferredInteractionDirection;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithAnnouncement:(id)arg0 recipients:(id)arg1 isReply:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif