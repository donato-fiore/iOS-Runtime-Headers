// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDATECONTENTITEM_H
#define WFDATECONTENTITEM_H

@class NSDate;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFDateContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDate *date;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(BOOL)getListAltText:(id)arg0 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)richListTitle;


@end


#endif