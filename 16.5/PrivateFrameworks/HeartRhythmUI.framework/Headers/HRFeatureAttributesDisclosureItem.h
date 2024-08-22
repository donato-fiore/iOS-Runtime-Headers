// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRFEATUREATTRIBUTESDISCLOSUREITEM_H
#define HRFEATUREATTRIBUTESDISCLOSUREITEM_H



#import "HRFeatureAttributesItem.h"

@interface HRFeatureAttributesDisclosureItem : HRFeatureAttributesItem



-(BOOL)isInteractive;
-(NSInteger)cellAccessoryType;
-(id)initWithTitle:(id)arg0 value:(id)arg1 ;
-(id)valueString;
-(void)handleUserInteractionWithItemWithHostViewController:(id)arg0 ;


@end


#endif