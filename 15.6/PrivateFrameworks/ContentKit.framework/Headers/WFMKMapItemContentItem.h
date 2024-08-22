// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMKMAPITEMCONTENTITEM_H
#define WFMKMAPITEMCONTENTITEM_H

@class MKMapItem, CLLocation;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) CLLocation *queryLocation; // ivar: _queryLocation


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
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif