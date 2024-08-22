// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMUTABLEMEDIAGROUP_H
#define HMMUTABLEMEDIAGROUP_H

@class NSUUID, NSArray, NSString;


#import "HMMediaGroup.h"

@interface HMMutableMediaGroup : HMMediaGroup

@property (copy) NSUUID *associatedGroupIdentifier;
@property (getter=isDefaultName) BOOL defaultName;
@property (copy) NSArray *destinationUniqueIdentifiers;
@property (copy) NSUUID *identifier;
@property (copy) NSString *name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif