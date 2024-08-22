// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMESSAGEFLAGCHANGEACTION_H
#define EMMESSAGEFLAGCHANGEACTION_H

@class ECMessageFlagChange;


#import "EMMessageChangeAction.h"

@interface EMMessageFlagChangeAction : EMMessageChangeAction

@property (readonly, nonatomic) ECMessageFlagChange *flagChange; // ivar: _flagChange


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageListItems:(id)arg0 flagChange:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif