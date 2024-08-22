// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUIDATACLASSACTIONPICKER_H
#define ACUIDATACLASSACTIONPICKER_H

@class NSArray, ACAccount, ACDataclassAction;

#import <Foundation/Foundation.h>


@interface ACUIDataclassActionPicker : NSObject

@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) ACAccount *affectedAccount; // ivar: _affectedAccount
@property (copy, nonatomic) NSArray *affectedDataclasses; // ivar: _affectedDataclasses
@property (readonly, nonatomic) ACDataclassAction *firstDestructiveAction;
@property (readonly, nonatomic) BOOL hasDestructiveActions;
@property (readonly, nonatomic) NSInteger priorityIndex;


-(BOOL)hasActionOfType:(NSInteger)arg0 ;
-(id)_stringForMessage:(id)arg0 withAccountType:(id)arg1 dataclassDescription:(id)arg2 ;
-(id)actionOfType:(NSInteger)arg0 ;
-(id)descriptionForDataclassAction:(id)arg0 ;
-(id)initWithActions:(id)arg0 affectingAccount:(id)arg1 ;
-(id)message;
-(id)showInViewController:(id)arg0 ;
-(id)title;
-(void)addAffectedDataclass:(id)arg0 ;


@end


#endif