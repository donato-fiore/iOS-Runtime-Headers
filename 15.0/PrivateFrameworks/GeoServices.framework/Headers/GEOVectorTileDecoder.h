// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOVECTORTILEDECODER_H
#define GEOVECTORTILEDECODER_H

@class NSString;
@protocol GEOTileDecoder;

#import <Foundation/Foundation.h>


@interface GEOVectorTileDecoder : NSObject <GEOTileDecoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canDecodeTile:(struct _GEOTileKey *)arg0 quickly:(*BOOL)arg1 ;
-(id)decodeTile:(id)arg0 forKey:(struct _GEOTileKey *)arg1 ;


@end


#endif