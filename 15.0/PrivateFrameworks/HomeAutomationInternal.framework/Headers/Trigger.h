// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIGGER_H
#define TRIGGER_H

@class INObject, NSString;


#import "TriggerValue.h"

@interface Trigger : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) NSInteger type;
@property (nonatomic, retain) TriggerValue *value;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif