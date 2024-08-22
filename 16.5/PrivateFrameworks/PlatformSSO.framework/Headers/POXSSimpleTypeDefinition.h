// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POXSSIMPLETYPEDEFINITION_H
#define POXSSIMPLETYPEDEFINITION_H

@class NSString;
@protocol POXSDefinitionProvider;


#import "POXSDefinition.h"

@interface POXSSimpleTypeDefinition : POXSDefinition <POXSDefinitionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)definition;
-(id)stringFromValue:(id)arg0 ;
-(id)valueFromString:(id)arg0 ;


@end


#endif