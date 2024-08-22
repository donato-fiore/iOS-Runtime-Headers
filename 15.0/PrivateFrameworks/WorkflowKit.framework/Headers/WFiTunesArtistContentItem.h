// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFITUNESARTISTCONTENTITEM_H
#define WFITUNESARTISTCONTENTITEM_H



#import "WFiTunesObjectContentItem.h"

@interface WFiTunesArtistContentItem : WFiTunesObjectContentItem



+(BOOL)canLowercaseTypeDescription;
+(id)contentCategories;
+(id)countDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif