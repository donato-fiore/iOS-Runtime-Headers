// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPASSETMETADATA_H
#define GEOMAPASSETMETADATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOMapAssetMetadata : NSObject {
    NSArray *_tiles;
    BOOL _enableASTCTextures;
}




-(id)initWithVectorTiles:(id)arg0 enableASTCTextures:(BOOL)arg1 ;
-(id)keysForMetroAvailability:(BOOL)arg0 ;


@end


#endif