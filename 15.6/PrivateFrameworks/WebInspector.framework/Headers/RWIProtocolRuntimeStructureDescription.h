// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLRUNTIMESTRUCTUREDESCRIPTION_H
#define RWIPROTOCOLRUNTIMESTRUCTUREDESCRIPTION_H

@class NSString, NSArray;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolRuntimeStructureDescription.h"

@interface RWIProtocolRuntimeStructureDescription : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *constructorName;
@property (copy, nonatomic) NSArray *fields;
@property (nonatomic) BOOL isImprecise;
@property (copy, nonatomic) NSArray *optionalFields;
@property (retain, nonatomic) RWIProtocolRuntimeStructureDescription *prototypeStructure;




@end


#endif