// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNQUICKDISAMBIGUATEACTION_H
#define CNQUICKDISAMBIGUATEACTION_H

@class NSOrderedSet;


#import "CNQuickPropertyAction.h"
#import "CNQuickAction.h"

@interface CNQuickDisambiguateAction : CNQuickPropertyAction

@property (retain, nonatomic) NSOrderedSet *actions; // ivar: _actions
@property (nonatomic) BOOL ignoreMainAction; // ivar: _ignoreMainAction
@property (weak, nonatomic) CNQuickAction *mainAction; // ivar: _mainAction


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithActions:(id)arg0 ;
-(id)subtitleForContext:(NSInteger)arg0 ;
-(id)titleForContext:(NSInteger)arg0 ;
-(void)performWithCompletionBlock:(id)arg0 ;


@end


#endif