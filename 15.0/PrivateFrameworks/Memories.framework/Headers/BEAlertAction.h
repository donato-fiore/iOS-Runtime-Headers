// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BEALERTACTION_H
#define BEALERTACTION_H

@class UIAlertAction;



@interface BEAlertAction : UIAlertAction

@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (nonatomic) NSInteger tag; // ivar: _tag


-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 tag:(NSInteger)arg2 action:(id)arg3 ;
-(void)doActionHandler;


@end


#endif