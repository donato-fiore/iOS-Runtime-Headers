// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLEEDITINGCONTEXT_H
#define WFVARIABLEEDITINGCONTEXT_H

@class WFVariable;

#import <Foundation/Foundation.h>


@interface WFVariableEditingContext : NSObject

@property (readonly, nonatomic) BOOL editingVariable; // ivar: _editingVariable
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) WFVariable *variable; // ivar: _variable


+(id)newWithVariable:(id)arg0 range:(struct _NSRange )arg1 editingVariable:(BOOL)arg2 ;


@end


#endif