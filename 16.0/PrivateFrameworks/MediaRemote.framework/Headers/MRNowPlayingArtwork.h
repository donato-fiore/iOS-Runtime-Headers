// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRNOWPLAYINGARTWORK_H
#define MRNOWPLAYINGARTWORK_H


#import <Foundation/Foundation.h>


@interface MRNowPlayingArtwork : NSObject

@property (readonly, nonatomic) BOOL hasArtworkData;
@property (readonly, nonatomic) unsigned int type;


-(id)copyImageData;


@end


#endif