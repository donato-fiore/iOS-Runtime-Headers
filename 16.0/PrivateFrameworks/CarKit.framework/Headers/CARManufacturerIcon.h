// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CARMANUFACTURERICON_H
#define CARMANUFACTURERICON_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CARManufacturerIcon : NSObject

@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (readonly, nonatomic, getter=isPrerendered) BOOL prerendered; // ivar: _prerendered


-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif