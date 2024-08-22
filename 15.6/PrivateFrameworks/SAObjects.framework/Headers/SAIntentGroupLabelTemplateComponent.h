// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPLABELTEMPLATECOMPONENT_H
#define SAINTENTGROUPLABELTEMPLATECOMPONENT_H

@class NSString;


#import "SADomainObject.h"

@interface SAIntentGroupLabelTemplateComponent : SADomainObject

@property (copy, nonatomic) NSString *labelTemplateComponentStyle;
@property (copy, nonatomic) NSString *text;


+(id)labelTemplateComponent;
+(id)labelTemplateComponentWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif