// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMUTABLEPERSONFACECROP_H
#define HMMUTABLEPERSONFACECROP_H

@class NSUUID;


#import "HMPersonFaceCrop.h"

@interface HMMutablePersonFaceCrop : HMPersonFaceCrop

@property NSInteger source;
@property (copy) NSUUID *unassociatedFaceCropUUID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif