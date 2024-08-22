// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JEDERESURLTREATMENTACTION_H
#define JEDERESURLTREATMENTACTION_H

@class NSString, NSDictionary;


#import "JETreatmentAction.h"

@interface JEDeresURLTreatmentAction : JETreatmentAction {
    NSString *_scope;
    NSDictionary *_allowedParameters;
}




-(id)allowedQueryItemsFromItems:(id)arg0 ;
-(id)initWithField:(id)arg0 configuration:(id)arg1 ;
-(id)performAction:(id)arg0 context:(id)arg1 ;


@end


#endif