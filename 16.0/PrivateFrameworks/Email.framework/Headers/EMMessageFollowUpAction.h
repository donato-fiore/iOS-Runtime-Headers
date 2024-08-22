// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGEFOLLOWUPACTION_H
#define EMMESSAGEFOLLOWUPACTION_H



#import "EMMessageChangeAction.h"
#import "EMFollowUp.h"

@interface EMMessageFollowUpAction : EMMessageChangeAction

@property (readonly, nonatomic) EMFollowUp *followUp; // ivar: _followUp


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageListItems:(id)arg0 followUp:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif