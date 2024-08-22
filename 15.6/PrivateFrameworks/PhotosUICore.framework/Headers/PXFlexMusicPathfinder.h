// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFLEXMUSICPATHFINDER_H
#define PXFLEXMUSICPATHFINDER_H

@class NSArray;
@protocol PXFMSong;

#import <Foundation/Foundation.h>


@interface PXFlexMusicPathfinder : NSObject {
    NSArray *_renditions;
}


@property (readonly, nonatomic) NSObject<PXFMSong> *song; // ivar: _song


-(id)init;
-(id)initWithSong:(id)arg0 ;
-(void)_loadRenditionsIfNeeded;
-(void)findPathFromCurrentTime:(struct ? )arg0 inRendition:(id)arg1 withTargetRemainder:(struct ? )arg2 tolerance:(struct ? )arg3 result:(id)arg4 ;


@end


#endif