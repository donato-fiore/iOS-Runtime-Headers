// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMUTABLEMEDIASYSTEMDATA_H
#define HMMUTABLEMEDIASYSTEMDATA_H

@class NSUUID, NSString;


#import "HMMediaSystemData.h"

@interface HMMutableMediaSystemData : HMMediaSystemData

@property (copy) NSUUID *associatedGroupIdentifier;
@property (getter=isDefaultName) BOOL defaultName;
@property (copy) NSUUID *leftDestinationIdentifier;
@property (copy) NSString *name;
@property (copy) NSUUID *rightDestinationIdentifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif