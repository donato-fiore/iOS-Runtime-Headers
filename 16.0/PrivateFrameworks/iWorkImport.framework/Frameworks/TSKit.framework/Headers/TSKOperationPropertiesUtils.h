// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKOPERATIONPROPERTIESUTILS_H
#define TSKOPERATIONPROPERTIESUTILS_H


#import <Foundation/Foundation.h>


@interface TSKOperationPropertiesUtils : NSObject



+(id)propertyNameForPropertyId:(unsigned short)arg0 ;
+(struct ? )propertyTypeWithId:(unsigned short)arg0 ;
+(struct ? )propertyTypeWithName:(id)arg0 ;
+(struct vector<TSKOperationPropertyId, std::allocator<TSKOperationPropertyId>> )propertyIdsForPropertyNames:(id)arg0 allowUnknown:(BOOL)arg1 ;


@end


#endif