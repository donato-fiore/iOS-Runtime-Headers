// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIVIDEO_H
#define SKUIVIDEO_H

@class NSURL;
@protocol SKUIArtworkProviding;

#import <Foundation/Foundation.h>


@interface SKUIVideo : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, nonatomic) NSObject<SKUIArtworkProviding> *artworks; // ivar: _artworks


-(id)initWithVideoDictionary:(id)arg0 ;


@end


#endif