// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMAD_H
#define EDAMAD_H

@class NSString, NSNumber, NSData;


#import "FATObject.h"

@interface EDAMAd : FATObject

@property (retain, nonatomic) NSString *advertiserName; // ivar: _advertiserName
@property (retain, nonatomic) NSString *destinationUrl; // ivar: _destinationUrl
@property (retain, nonatomic) NSNumber *displayFrequency; // ivar: _displayFrequency
@property (retain, nonatomic) NSNumber *displaySeconds; // ivar: _displaySeconds
@property (retain, nonatomic) NSNumber *height; // ivar: _height
@property (retain, nonatomic) NSString *html; // ivar: _html
@property (retain, nonatomic) NSNumber *id; // ivar: _id
@property (retain, nonatomic) NSData *image; // ivar: _image
@property (retain, nonatomic) NSString *imageMime; // ivar: _imageMime
@property (retain, nonatomic) NSString *imageUrl; // ivar: _imageUrl
@property (retain, nonatomic) NSNumber *openInTrunk; // ivar: _openInTrunk
@property (retain, nonatomic) NSNumber *score; // ivar: _score
@property (retain, nonatomic) NSNumber *width; // ivar: _width


+(id)structFields;
+(id)structName;


@end


#endif