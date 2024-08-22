// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFINSPEAKABLESTRINGCONTENTITEM_H
#define WFINSPEAKABLESTRINGCONTENTITEM_H

@class WFContentItem, NSString, INSpeakableString;
@protocol WFContentItemClass;



@interface WFINSpeakableStringContentItem : WFContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) INSpeakableString *speakableString;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif