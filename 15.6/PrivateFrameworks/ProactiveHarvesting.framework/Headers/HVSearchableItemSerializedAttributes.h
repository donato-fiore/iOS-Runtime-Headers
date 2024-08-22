// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HVSEARCHABLEITEMSERIALIZEDATTRIBUTES_H
#define HVSEARCHABLEITEMSERIALIZEDATTRIBUTES_H

@class CSCoder, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HVSearchableItemSerializedAttributes : NSObject <NSCopying>



@property (readonly, nonatomic) CSCoder *attributeSetCoder; // ivar: _attributeSetCoder
@property (readonly, nonatomic) NSData *attributeSetData; // ivar: _attributeSetData
@property (readonly, nonatomic) NSData *htmlContentData; // ivar: _htmlContentData


+(id)serializedAttributesWithAttributeSetData:(id)arg0 attributeSetCoder:(id)arg1 htmlContentData:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSerializedAttributes:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAttributeSetData:(id)arg0 attributeSetCoder:(id)arg1 htmlContentData:(id)arg2 ;


@end


#endif