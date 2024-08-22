// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMUTABLEPERSON_H
#define HMMUTABLEPERSON_H

@class NSUUID, NSString, NSSet;


#import "HMPerson.h"

@interface HMMutablePerson : HMPerson

@property (copy) NSUUID *UUID;
@property (copy) NSString *name;
@property (copy) NSSet *personLinks;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif