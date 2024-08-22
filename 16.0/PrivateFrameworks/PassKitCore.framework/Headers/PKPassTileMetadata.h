// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSTILEMETADATA_H
#define PKPASSTILEMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPassTileMetadataVehicleFunction.h"

@interface PKPassTileMetadata : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) PKPassTileMetadataVehicleFunction *metadataTypeVehicleFunction;
@property (nonatomic) NSInteger preferredStyle; // ivar: _preferredStyle
@property (nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)_createDictionaryMapForDictionaries:(id)arg0 ;
+(id)_createMetadataForType:(NSInteger)arg0 identifier:(id)arg1 ;
+(id)_createWithDictionary:(id)arg0 privateDictionaryMap:(id)arg1 privateDictionary:(*id)arg2 ;
-(BOOL)_setupWithDictionary:(id)arg0 privateDictionary:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif