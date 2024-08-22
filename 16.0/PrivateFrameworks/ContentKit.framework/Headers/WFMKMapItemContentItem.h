// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMKMAPITEMCONTENTITEM_H
#define WFMKMAPITEMCONTENTITEM_H

@class NSString, MKMapItem, CLLocation;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) CLLocation *queryLocation; // ivar: _queryLocation
@property (readonly) Class superclass;


+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)itemWithMapItem:(id)arg0 fromQueryLocation:(id)arg1 origin:(id)arg2 disclosureLevel:(NSUInteger)arg3 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
-(NSUInteger)preferredDisplayStyle;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif