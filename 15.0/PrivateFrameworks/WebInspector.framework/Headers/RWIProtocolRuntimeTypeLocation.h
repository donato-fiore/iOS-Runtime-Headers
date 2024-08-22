// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLRUNTIMETYPELOCATION_H
#define RWIPROTOCOLRUNTIMETYPELOCATION_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject

@property (nonatomic) int divot;
@property (copy, nonatomic) NSString *sourceID;
@property (nonatomic) int typeInformationDescriptor;


-(id)initWithTypeInformationDescriptor:(int)arg0 sourceID:(id)arg1 divot:(int)arg2 ;


@end


#endif