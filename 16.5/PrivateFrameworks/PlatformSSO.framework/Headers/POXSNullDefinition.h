// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POXSNULLDEFINITION_H
#define POXSNULLDEFINITION_H

@class NSString;
@protocol POXSDefinitionProvider;


#import "POXSDefinition.h"

@interface POXSNullDefinition : POXSDefinition <POXSDefinitionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)definition;
-(Class)typeForName:(id)arg0 ;


@end


#endif