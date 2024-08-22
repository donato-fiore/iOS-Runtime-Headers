// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMRELATEDCONTENTIMAGE_H
#define EDAMRELATEDCONTENTIMAGE_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMRelatedContentImage : FATObject

@property (retain, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSNumber *height; // ivar: _height
@property (retain, nonatomic) NSNumber *pixelRatio; // ivar: _pixelRatio
@property (retain, nonatomic) NSString *url; // ivar: _url
@property (retain, nonatomic) NSNumber *width; // ivar: _width


+(id)structFields;
+(id)structName;


@end


#endif