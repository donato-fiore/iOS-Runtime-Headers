// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPMUTABLEANIMATABLEPROPERTY_H
#define POPMUTABLEANIMATABLEPROPERTY_H

@class NSString;


#import "POPAnimatableProperty.h"

@interface POPMutableAnimatableProperty : POPAnimatableProperty

@property (copy, nonatomic) NSString *name; // ivar: name
@property (copy, nonatomic) id *readBlock; // ivar: readBlock
@property (nonatomic) CGFloat threshold; // ivar: threshold
@property (copy, nonatomic) id *writeBlock; // ivar: writeBlock




@end


#endif