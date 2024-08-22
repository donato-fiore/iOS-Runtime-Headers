// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOSASCRIPTEDITORPARAMETER_H
#define WFOSASCRIPTEDITORPARAMETER_H

@class NSString;
@protocol WFOSAScriptEditorParameterDelegate;


#import "WFParameter.h"

@interface WFOSAScriptEditorParameter : WFParameter

@property (weak, nonatomic) NSObject<WFOSAScriptEditorParameterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *languageName; // ivar: _languageName


-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif