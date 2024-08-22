// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCALENDAREVENTCONTENTITEM_H
#define WFCALENDAREVENTCONTENTITEM_H

@class EKEvent, EKEventStore, NSString;


#import "WFGenericFileContentItem.h"

@interface WFCalendarEventContentItem : WFGenericFileContentItem

@property (readonly, nonatomic) EKEvent *event;
@property (retain, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly, nonatomic) NSString *location;


+(BOOL)hasLibrary;
+(id)coercions;
+(id)contentCategories;
+(id)countDescription;
+(id)dateByApplyingComponents:(id)arg0 toDateComponents:(id)arg1 ;
+(id)filterDescription;
+(id)icsCoercionHandler;
+(id)itemWithEKEvent:(id)arg0 fromEventStore:(id)arg1 ;
+(id)mapItemCoercionHandler;
+(id)mapsLinkCoercionHandler;
+(id)outputTypes;
+(id)ownedTypes;
+(id)participantsCoercionHandler;
+(id)placemarkCoercionHandler;
+(id)pluralFilterDescription;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)streetAddressCoercionHandler;
+(id)stringConversionBehavior;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 permissionRequestor:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)attachments;
-(id)changeTransaction;
-(id)color;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)isCanceled;
-(id)myStatus;
-(id)structuredLocation;
-(void)copyStateToItem:(id)arg0 ;
-(void)getMapItemRepresentationIfPresent:(id)arg0 ;


@end


#endif