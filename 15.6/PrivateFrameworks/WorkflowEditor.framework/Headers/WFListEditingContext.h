// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLISTEDITINGCONTEXT_H
#define WFLISTEDITINGCONTEXT_H


#import <Foundation/Foundation.h>

#import "WFListEditorUpdateItem.h"
#import "WFVariableEditingContext.h"

@interface WFListEditingContext : NSObject

@property (nonatomic) BOOL key; // ivar: _key
@property (nonatomic) BOOL nested; // ivar: _nested
@property (retain, nonatomic) WFListEditorUpdateItem *updateItem; // ivar: _updateItem
@property (retain, nonatomic) WFVariableEditingContext *variableContext; // ivar: _variableContext




@end


#endif