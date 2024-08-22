// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DTSPIMAGEDATA_H
#define TSCH3DTSPIMAGEDATA_H

@class TSPData;

#import <Foundation/Foundation.h>

#import "TSCH3DTSPImageDataTexture.h"

@interface TSCH3DTSPImageData : NSObject {
    TSCH3DTSPImageDataTexture *_parent;
}


@property (retain, nonatomic) TSPData *data; // ivar: _data


+(id)dataWithTSPImageData:(id)arg0 ;
-(BOOL)canLoadCachedDataForDataCache:(id)arg0 ;
-(BOOL)hasCompleteData;
-(id)databufferForDataCache:(id)arg0 ;
-(id)initWithTSPImageData:(id)arg0 ;
-(id)p_decodeCachedData:(id)arg0 imageSize:(*void)arg1 ;
-(id)p_encodeImageSize:(*void)arg0 andMipmapData:(id)arg1 ;
-(id)p_generateMipmapsBuffer;
-(id)uniqueFilename;
-(struct CGImage *)newCGImage;
-(void)setParent:(id)arg0 ;


@end


#endif