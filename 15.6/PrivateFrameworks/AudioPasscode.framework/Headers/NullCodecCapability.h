// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NULLCODECCAPABILITY_H
#define NULLCODECCAPABILITY_H

@protocol NSSecureCoding;


#import "AUPasscodeCodecCapability.h"

@interface NullCodecCapability : AUPasscodeCodecCapability <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif