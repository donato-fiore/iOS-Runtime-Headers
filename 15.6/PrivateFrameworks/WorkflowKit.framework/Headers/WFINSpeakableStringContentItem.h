// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINSPEAKABLESTRINGCONTENTITEM_H
#define WFINSPEAKABLESTRINGCONTENTITEM_H

@class WFContentItem, INSpeakableString;
@protocol WFContentItemClass;



@interface WFINSpeakableStringContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) INSpeakableString *speakableString;


+(id)contentCategories;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif