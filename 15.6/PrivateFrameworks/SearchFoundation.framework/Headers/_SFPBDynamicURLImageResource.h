// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBDYNAMICURLIMAGERESOURCE_H
#define _SFPBDYNAMICURLIMAGERESOURCE_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBDynamicURLImageResource, NSSecureCoding;


#import "_SFPBGraphicalFloat.h"

@interface _SFPBDynamicURLImageResource : PBCodable <_SFPBDynamicURLImageResource, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *formatURL; // ivar: _formatURL
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *imageOptions; // ivar: _imageOptions
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBGraphicalFloat *pixelHeight; // ivar: _pixelHeight
@property (retain, nonatomic) _SFPBGraphicalFloat *pixelWidth; // ivar: _pixelWidth
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsResizing; // ivar: _supportsResizing


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)imageOptionsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addImageOptions:(id)arg0 ;
-(void)clearImageOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif