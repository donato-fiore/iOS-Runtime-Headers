// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAINTENTGROUPDETAILLABELTEMPLATECOMPONENT_H
#define SAINTENTGROUPDETAILLABELTEMPLATECOMPONENT_H

@class NSString;


#import "SAIntentGroupLabelTemplateComponent.h"

@interface SAIntentGroupDetailLabelTemplateComponent : SAIntentGroupLabelTemplateComponent

@property (copy, nonatomic) NSString *detailText;


+(id)detailLabelTemplateComponent;
+(id)detailLabelTemplateComponentWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif