// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIPEEKCOMMAND_H
#define SEARCHUIPEEKCOMMAND_H

@class UIViewController;


#import "SearchUICommand.h"
#import "SearchUIActionProvider.h"

@interface SearchUIPeekCommand : SearchUICommand

@property (retain, nonatomic) SearchUIActionProvider *actions; // ivar: _actions
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)urlMatchingScheme:(id)arg0 inPunchout:(id)arg1 ;
-(id)actionProvider:(SEL)arg0 ;
-(id)generateViewController;


@end


#endif