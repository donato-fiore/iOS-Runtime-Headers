// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMUNDOMESSAGEACTION_H
#define EMUNDOMESSAGEACTION_H

@class NSArray;


#import "EMMessageChangeAction.h"

@interface EMUndoMessageAction : EMMessageChangeAction

@property (readonly, copy, nonatomic) NSArray *individualActions; // ivar: _individualActions


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIndividualActions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif