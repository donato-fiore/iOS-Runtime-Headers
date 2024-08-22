// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NACVOLUMERECORD_H
#define _NACVOLUMERECORD_H

@class NSMutableSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _NACVolumeRecord : NSObject <NSSecureCoding>

 {
    NSMutableSet *_observers;
}


@property (nonatomic) float EUVolumeLimit; // ivar: _EUVolumeLimit
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (readonly, nonatomic) NSMutableSet *observers;
@property (nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable; // ivar: _volumeControlAvailable
@property (nonatomic) float volumeValue; // ivar: _volumeValue
@property (nonatomic, getter=isVolumeWarningEnabled) BOOL volumeWarningEnabled; // ivar: _volumeWarningEnabled
@property (nonatomic) NSInteger volumeWarningState; // ivar: _volumeWarningState


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif