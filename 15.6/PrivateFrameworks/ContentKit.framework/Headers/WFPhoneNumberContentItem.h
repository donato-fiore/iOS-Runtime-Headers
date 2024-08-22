// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPHONENUMBERCONTENTITEM_H
#define WFPHONENUMBERCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFPhoneNumber.h"

@interface WFPhoneNumberContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFPhoneNumber *phoneNumber;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)richListTitle;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif