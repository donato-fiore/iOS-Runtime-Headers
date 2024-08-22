// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKUIATLASBACKING_H
#define CLKUIATLASBACKING_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "CLKUIMmapFile.h"

@interface CLKUIAtlasBacking : NSObject {
    NSData *_data;
    CLKUIMmapFile *_mmapFile;
}


@property (readonly, nonatomic) *void bytes;
@property (readonly, nonatomic) NSUInteger bytesLength;
@property (readonly, nonatomic) NSUInteger bytesPerPixel;
@property (nonatomic) unsigned char filter;
@property (readonly, nonatomic) unsigned char format;
@property (readonly, nonatomic) NSUInteger height;
@property (readonly, nonatomic) NSUInteger mipCount;
@property (readonly, nonatomic) BOOL mipmaps;
@property (readonly, nonatomic) NSUInteger planeLength;
@property (readonly, nonatomic) NSUInteger planes;
@property (readonly, nonatomic) CLKUIAtlasBackingStructure structure; // ivar: _structure
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSUInteger width;
@property (nonatomic) unsigned char wrap;


+(id)atlasBackingWithArt:(id)arg0 uuid:(id)arg1 ;
+(id)atlasBackingWithBytes:(*void)arg0 length:(NSUInteger)arg1 mmapFile:(id)arg2 uuid:(id)arg3 ;
+(id)atlasBackingWithImage:(id)arg0 uuid:(id)arg1 ;
+(id)atlasBackingWithImage:(id)arg0 uuid:(id)arg1 mipmap:(BOOL)arg2 ;
+(id)atlasBackingWithUuid:(id)arg0 structure:(struct CLKUIAtlasBackingStructure )arg1 data:(id)arg2 ;
-(BOOL)writeToFile:(id)arg0 error:(*id)arg1 ;
-(id)initWithUuid:(id)arg0 structure:(struct CLKUIAtlasBackingStructure )arg1 data:(id)arg2 ;
-(id)initWithUuid:(id)arg0 structure:(struct CLKUIAtlasBackingStructure )arg1 mmapFile:(id)arg2 ;


@end


#endif