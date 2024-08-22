// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CODISTANTACCESSORYCOLLECTIONSETTING_H
#define CODISTANTACCESSORYCOLLECTIONSETTING_H

@protocol NSFastEnumeration;


#import "CODistantAccessorySetting.h"

@interface CODistantAccessoryCollectionSetting : CODistantAccessorySetting <NSFastEnumeration>





+(BOOL)supportsSecureCoding;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif