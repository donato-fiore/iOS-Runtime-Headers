// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUIMAGEPROPERTIES_H
#define _NUIMAGEPROPERTIES_H

@class NSDictionary, NSString, NSURL;
@protocol NUImageProperties, NURAWImageProperties;

#import <Foundation/Foundation.h>


@interface _NUImageProperties : NSObject <NUImageProperties>



@property NSInteger alphaInfo; // ivar: _alphaInfo
@property (retain) NSDictionary *auxiliaryImagesProperties; // ivar: _auxiliaryImagesProperties
@property (retain, nonatomic) *CGColorSpace colorSpace; // ivar: _colorSpace
@property NSInteger componentInfo; // ivar: _componentInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *fileUTI; // ivar: _fileUTI
@property (readonly) NSUInteger hash;
@property BOOL isFusedOvercapture; // ivar: _isFusedOvercapture
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property NSInteger orientation; // ivar: _orientation
@property (retain) NSObject<NURAWImageProperties> *rawProperties; // ivar: _rawProperties
@property ? size; // ivar: _size
@property (readonly) Class superclass;
@property (retain) NSURL *url; // ivar: _url


-(void)dealloc;


@end


#endif