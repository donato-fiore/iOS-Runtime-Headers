// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCLIPBOARDVARIABLE_H
#define WFCLIPBOARDVARIABLE_H



#import "WFVariable.h"

@interface WFClipboardVariable : WFVariable



-(BOOL)isAvailable;
-(BOOL)requiresModernVariableSupport;
-(id)iconSymbolName;
-(id)initWithAggrandizements:(id)arg0 ;
-(id)name;
-(id)possibleContentClassesWithContext:(id)arg0 ;
-(id)requiredAccessResources;
-(void)retrieveContentCollectionWithVariableSource:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif