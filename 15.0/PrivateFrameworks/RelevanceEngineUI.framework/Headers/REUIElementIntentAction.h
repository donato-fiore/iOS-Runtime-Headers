// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUIELEMENTINTENTACTION_H
#define REUIELEMENTINTENTACTION_H

@class INIntent;


#import "REUIElementDonatedActionAction.h"

@interface REUIElementIntentAction : REUIElementDonatedActionAction

@property (readonly, nonatomic) INIntent *intent;


-(id)_newPerformer;
-(id)initWithCoder:(id)arg0 ;
-(void)_performWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif