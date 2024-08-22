// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTENTITEMACTION_H
#define WFCONTENTITEMACTION_H

@class WFContentProperty;


#import "WFAction.h"

@interface WFContentItemAction : WFAction

@property (readonly, nonatomic) WFContentProperty *defaultProperty; // ivar: _defaultProperty


-(BOOL)inputsMultipleItems;
-(BOOL)outputsMultipleItems;
-(id)description;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)inputContentClasses;


@end


#endif