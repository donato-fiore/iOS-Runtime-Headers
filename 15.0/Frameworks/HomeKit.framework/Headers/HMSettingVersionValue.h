// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSETTINGVERSIONVALUE_H
#define HMSETTINGVERSIONVALUE_H

@class HMFVersion;


#import "HMImmutableSettingValue.h"

@interface HMSettingVersionValue : HMImmutableSettingValue

@property (readonly) NSInteger type; // ivar: _type
@property (readonly) HMFVersion *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithVersion:(id)arg0 type:(NSInteger)arg1 ;
-(id)payloadCopy;


@end


#endif