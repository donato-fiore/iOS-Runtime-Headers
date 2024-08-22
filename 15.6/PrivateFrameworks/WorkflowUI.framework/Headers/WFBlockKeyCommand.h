// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFBLOCKKEYCOMMAND_H
#define WFBLOCKKEYCOMMAND_H

@class UIKeyCommand;



@interface WFBlockKeyCommand : UIKeyCommand

@property (readonly, nonatomic) id *block; // ivar: _block


+(id)commandWithTitle:(id)arg0 input:(id)arg1 modifierFlags:(NSInteger)arg2 block:(id)arg3 ;


@end


#endif