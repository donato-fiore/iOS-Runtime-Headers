// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXMOSAICGALLERYCLUSTER_H
#define SXMOSAICGALLERYCLUSTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SXMosaicGalleryCluster : NSObject

@property (readonly, nonatomic) NSArray *items; // ivar: _items


-(BOOL)clusterIsEqualToTileTypes:(id)arg0 ;
-(BOOL)isClusterOfType:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithItems:(id)arg0 ;


@end


#endif