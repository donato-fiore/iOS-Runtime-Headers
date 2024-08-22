// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUINOWPLAYINGOBSERVATION_H
#define VUINOWPLAYINGOBSERVATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUINowPlayingObservation : NSObject

@property (copy, nonatomic) NSString *nowPlayingAppBundleIdentifier; // ivar: _nowPlayingAppBundleIdentifier
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 isPlaying:(BOOL)arg1 ;


@end


#endif