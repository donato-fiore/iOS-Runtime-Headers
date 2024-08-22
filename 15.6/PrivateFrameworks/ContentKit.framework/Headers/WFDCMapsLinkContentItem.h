// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDCMAPSLINKCONTENTITEM_H
#define WFDCMAPSLINKCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFDCMapsLinkContentItem : WFContentItem <WFContentItemClass>





+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)additionalRepresentationsForSerialization;
-(id)mapsLink;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif