// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKTHIRDPARTYCOMPLICATION_H
#define NTKTHIRDPARTYCOMPLICATION_H

@class NSString, CLKComplicationDescriptor;


#import "NTKComplication.h"

@interface NTKThirdPartyComplication : NTKComplication

@property (readonly, nonatomic) NSString *clkClientIdentifier;
@property (readonly, nonatomic) CLKComplicationDescriptor *clkComplicationDescriptor;


+(BOOL)supportsSecureCoding;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif