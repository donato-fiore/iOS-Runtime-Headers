// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDCMAPSLINKCONTENTITEM_H
#define WFDCMAPSLINKCONTENTITEM_H

@class NSString;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFDCMapsLinkContentItem : WFContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(BOOL)includesFileRepresentationInSerializedItem;
-(NSUInteger)preferredDisplayStyle;
-(id)additionalRepresentationsForSerialization;
-(id)mapsLink;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif