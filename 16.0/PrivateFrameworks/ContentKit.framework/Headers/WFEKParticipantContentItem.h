// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEKPARTICIPANTCONTENTITEM_H
#define WFEKPARTICIPANTCONTENTITEM_H

@class NSString;
@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFParticipant.h"

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFParticipant *participant;
@property (readonly) Class superclass;


+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)filterDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralFilterDescription;
+(id)pluralTypeDescription;
+(id)possibleRoles;
+(id)possibleStatuses;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)canGenerateContact;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
-(BOOL)isCurrentUser;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)emailAddress;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)role;
-(id)status;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif