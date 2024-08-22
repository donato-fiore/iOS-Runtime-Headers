// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECFLAGCHANGEMESSAGEACTIONRESULTS_H
#define ECFLAGCHANGEMESSAGEACTIONRESULTS_H

@class NSIndexSet;


#import "ECLocalMessageActionResults.h"

@interface ECFlagChangeMessageActionResults : ECLocalMessageActionResults

@property (readonly, copy, nonatomic) NSIndexSet *completedUIDs; // ivar: _completedUIDs


-(id)initWithBuilder:(id)arg0 ;


@end


#endif