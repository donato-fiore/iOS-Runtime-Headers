// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMUTABLEPERSON_H
#define HMMUTABLEPERSON_H

@class NSUUID, NSString, NSSet;


#import "HMPerson.h"

@interface HMMutablePerson : HMPerson

@property (copy) NSUUID *externalPersonUUID;
@property (copy) NSString *name;
@property (copy) NSSet *personLinks;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif