// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRARTWORK_H
#define MRARTWORK_H

@class NSDictionary, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MRArtwork : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) NSInteger height; // ivar: _height
@property (copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic) NSInteger width; // ivar: _width


+(BOOL)processRequestsExternalArtworkValidation;
-(BOOL)isEqual:(id)arg0 ;
-(id)artworkByResizingWithWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithImageData:(id)arg0 height:(NSInteger)arg1 width:(NSInteger)arg2 ;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif