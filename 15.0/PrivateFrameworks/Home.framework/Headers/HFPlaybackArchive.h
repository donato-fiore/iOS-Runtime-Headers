// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFPLAYBACKARCHIVE_H
#define HFPLAYBACKARCHIVE_H

@class MPPlaybackArchive;

#import <Foundation/Foundation.h>


@interface HFPlaybackArchive : NSObject

@property (nonatomic, getter=isAutoPlayEnabled) BOOL autoPlayEnabled; // ivar: _autoPlayEnabled
@property (readonly, nonatomic) BOOL isRepeatSupported;
@property (readonly, nonatomic) BOOL isShuffleSupported;
@property (retain, nonatomic) MPPlaybackArchive *mediaPlayerPlaybackArchive; // ivar: _mediaPlayerPlaybackArchive
@property (nonatomic, getter=isRepeatEnabled) BOOL repeatEnabled;
@property (nonatomic, getter=isShuffleEnabled) BOOL shuffleEnabled;
@property (nonatomic) NSUInteger targetOptions;


-(id)initWithMediaPlayerPlaybackArchive:(id)arg0 ;


@end


#endif