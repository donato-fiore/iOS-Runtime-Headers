// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ALASSETREPRESENTATION_H
#define ALASSETREPRESENTATION_H


#import <Foundation/Foundation.h>

#import "ALAssetRepresentationPrivate.h"

@interface ALAssetRepresentation : NSObject

@property BOOL ignoreRead; // ivar: _ignoreRead
@property (retain, nonatomic) ALAssetRepresentationPrivate *internal; // ivar: _internal


+(void)_enableImageDataUsesMap;
-(BOOL)isValid;
-(NSInteger)orientation;
-(NSInteger)size;
-(NSUInteger)getBytes:(char *)arg0 fromOffset:(NSInteger)arg1 length:(NSUInteger)arg2 error:(*id)arg3 ;
-(float)scale;
-(id)UTI;
-(id)_imageData;
-(id)description;
-(id)filename;
-(id)initWithManagedAsset:(id)arg0 sidecar:(id)arg1 extension:(id)arg2 library:(id)arg3 ;
-(id)metadata;
-(id)url;
-(int)_fileDescriptor;
-(struct CGImage *)CGImageWithOptions:(id)arg0 ;
-(struct CGImage *)CGImageWithOptions:(id)arg0 format:(unsigned short)arg1 ;
-(struct CGImage *)_largeDisplayableImageForFormatID:(unsigned short)arg0 ;
-(struct CGImage *)fullResolutionImage;
-(struct CGImage *)fullScreenImage;
-(struct CGImage *)zoomableDisplayImage;
-(struct CGSize )dimensions;
-(void)dealloc;


@end


#endif