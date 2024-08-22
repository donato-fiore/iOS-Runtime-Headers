// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMULTIPLEVALUEEDITORVIEWCELLCONTEXT_H
#define WFMULTIPLEVALUEEDITORVIEWCELLCONTEXT_H

@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

#import <Foundation/Foundation.h>

#import "WFMultipleValueEditorViewCell.h"

@interface WFMultipleValueEditorViewCellContext : NSObject

@property (weak, nonatomic) WFMultipleValueEditorViewCell *cell; // ivar: _cell
@property (readonly, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext;
@property (readonly, nonatomic) NSObject<WFVariableProvider> *variableProvider;
@property (readonly, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate;




@end


#endif