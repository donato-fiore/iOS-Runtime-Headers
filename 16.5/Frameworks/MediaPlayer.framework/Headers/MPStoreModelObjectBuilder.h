// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTOREMODELOBJECTBUILDER_H
#define MPSTOREMODELOBJECTBUILDER_H


#import <Foundation/Foundation.h>

#import "MPPropertySet.h"

@interface MPStoreModelObjectBuilder : NSObject

@property (nonatomic) BOOL preventStoreItemMetadataCaching; // ivar: _preventStoreItemMetadataCaching
@property (readonly, nonatomic) MPPropertySet *requestedPropertySet; // ivar: _requestedPropertySet


+(id)allSupportedProperties;
-(id)initWithRequestedPropertySet:(id)arg0 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg0 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg0 sourceModelObject:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg0 sourceModelObject:(id)arg1 userIdentity:(id)arg2 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg0 userIdentity:(id)arg1 ;
-(id)modelObjectWithStorePlatformDictionary:(id)arg0 ;
-(id)modelObjectWithStorePlatformDictionary:(id)arg0 userIdentity:(id)arg1 ;


@end


#endif