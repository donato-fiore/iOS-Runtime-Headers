// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVDMUTABLESPEAKERCAPABILITY_H
#define _SVDMUTABLESPEAKERCAPABILITY_H

@class NSString;
@protocol SVDSpeakerCapabilityMutating;


#import "SVDSpeakerCapability.h"

@interface _SVDMutableSpeakerCapability : SVDSpeakerCapability <SVDSpeakerCapabilityMutating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger qualityScore; // ivar: _qualityScore
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


-(void)setSupportStatus:(NSInteger)arg0 ;


@end


#endif