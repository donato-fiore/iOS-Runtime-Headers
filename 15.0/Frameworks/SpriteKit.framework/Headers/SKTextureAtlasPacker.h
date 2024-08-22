// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKTEXTUREATLASPACKER_H
#define SKTEXTUREATLASPACKER_H


#import <Foundation/Foundation.h>


@interface SKTextureAtlasPacker : NSObject



+(struct CGImage *)copyProcessedImageSource:(id)arg0 ;
-(BOOL)isFullyOpaque:(struct CGImage *)arg0 ;
-(id)generateMetaData;
-(id)getTextureFileList:(id)arg0 modDate:(*id)arg1 ;
-(id)partitionTextureFilesByResolution:(id)arg0 ;
-(id)processPackedTextureAtlas:(*void)arg0 suffix:(id)arg1 packer:(struct shared_ptr<MaxRectTexturePacker> )arg2 sortedTrimArray:(*void)arg3 sortedTextureArray:(*void)arg4 ;
-(struct CGImage *)copyRotateCGImage:(struct CGImage *)arg0 direction:(BOOL)arg1 ;
-(struct CGRect )calcNonAlphaArea:(struct CGImage *)arg0 ;
-(void)generateTextureAtlasImages:(id)arg0 outputDictionary:(*id)arg1 forcePOT:(BOOL)arg2 ;


@end


#endif