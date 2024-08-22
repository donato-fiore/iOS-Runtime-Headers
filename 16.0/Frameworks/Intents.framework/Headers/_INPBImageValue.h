// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBIMAGEVALUE_H
#define _INPBIMAGEVALUE_H

@class PBCodable, NSData, NSString;
@protocol _INPBImageValue, NSSecureCoding, NSCopying;


#import "_INPBValueMetadata.h"

@interface _INPBImageValue : PBCodable <_INPBImageValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasData;
@property (nonatomic) BOOL hasHeight;
@property (readonly, nonatomic) BOOL hasProxyServiceIdentifier;
@property (nonatomic) BOOL hasRenderingMode;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUri;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (nonatomic) BOOL hasWidth;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (copy, nonatomic) NSString *proxyServiceIdentifier; // ivar: _proxyServiceIdentifier
@property (nonatomic) int renderingMode; // ivar: _renderingMode
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (copy, nonatomic) NSString *uri; // ivar: _uri
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata
@property (nonatomic) CGFloat width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)renderingModeAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsRenderingMode:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif