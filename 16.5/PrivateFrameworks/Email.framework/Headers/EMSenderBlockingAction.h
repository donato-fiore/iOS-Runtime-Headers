// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMSENDERBLOCKINGACTION_H
#define EMSENDERBLOCKINGACTION_H



#import "EMMessageChangeAction.h"

@interface EMSenderBlockingAction : EMMessageChangeAction

@property (readonly, nonatomic) BOOL blockSender; // ivar: _blockSender


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageListItems:(id)arg0 blockSender:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif