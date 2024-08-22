// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMUTABLEMEDIACONTENTPROFILEACCESSCONTROL_H
#define HMMUTABLEMEDIACONTENTPROFILEACCESSCONTROL_H

@class NSArray;


#import "HMMediaContentProfileAccessControl.h"

@interface HMMutableMediaContentProfileAccessControl : HMMediaContentProfileAccessControl

@property (copy) NSArray *accessories;


-(void)addAccessory:(id)arg0 ;
-(void)removeAccessory:(id)arg0 ;


@end


#endif