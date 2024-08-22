// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TICANDIDATESOFFEREDEVENT_H
#define TICANDIDATESOFFEREDEVENT_H

@class TIAutocorrectionList;


#import "TIUserAction.h"

@interface TICandidatesOfferedEvent : TIUserAction

@property (readonly, nonatomic) TIAutocorrectionList *candidates; // ivar: _candidates


+(BOOL)supportsSecureCoding;
-(id)initWithCandidates:(id)arg0 keyboardState:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif