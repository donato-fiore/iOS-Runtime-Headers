// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIACTIONUPDATEUPNEXT_H
#define VUIACTIONUPDATEUPNEXT_H

@class NSString;


#import "VUIAction.h"

@interface VUIActionUpdateUpNext : VUIAction

@property (nonatomic) BOOL confirmationShouldWaitCompletion; // ivar: _confirmationShouldWaitCompletion
@property (retain, nonatomic) NSString *itemID; // ivar: _itemID
@property (retain, nonatomic) NSString *state; // ivar: _state


-(BOOL)isAccountRequired;
-(id)initWithContextData:(id)arg0 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif