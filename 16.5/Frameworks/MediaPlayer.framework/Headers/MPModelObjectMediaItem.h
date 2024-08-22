// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELOBJECTMEDIAITEM_H
#define MPMODELOBJECTMEDIAITEM_H

@class NSDictionary;


#import "MPNondurableMediaItem.h"
#import "MPModelObject.h"

@interface MPModelObjectMediaItem : MPNondurableMediaItem {
    NSDictionary *_propertyValues;
}


@property (copy, nonatomic) id *fallbackArtworkCatalogBlock; // ivar: _fallbackArtworkCatalogBlock
@property (readonly, nonatomic) MPModelObject *modelObject; // ivar: _modelObject


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)persistentID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 ;
-(id)initWithPersistentID:(NSUInteger)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif