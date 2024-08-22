// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSTILESTATEMETADATA_H
#define PKPASSTILESTATEMETADATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPassTileStateMetadataVehicleFunction.h"

@interface PKPassTileStateMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKPassTileStateMetadataVehicleFunction *metadataTypeVehicleFunction;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)_createForType:(NSInteger)arg0 dictionary:(id)arg1 ;
+(id)_createWithType:(NSInteger)arg0 ;
-(BOOL)_setupWithDictionary:(id)arg0 ;
-(BOOL)isEqualToUnresolvedMetadata:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif