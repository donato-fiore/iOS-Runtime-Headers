// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHORTCUTINPUTVARIABLE_H
#define WFSHORTCUTINPUTVARIABLE_H

@protocol WFVariableProvider;


#import "WFVariable.h"

@interface WFShortcutInputVariable : WFVariable {
    id<WFVariableProvider> *_variableProvider;
}




-(BOOL)isAvailable;
-(id)iconImage;
-(id)iconSymbolName;
-(id)initWithDictionary:(id)arg0 variableProvider:(id)arg1 ;
-(id)initWithVariableProvider:(id)arg0 aggrandizements:(id)arg1 ;
-(id)name;
-(id)possibleContentClassesWithContext:(id)arg0 ;
-(id)variableProvider;
-(void)retrieveContentCollectionWithVariableSource:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif