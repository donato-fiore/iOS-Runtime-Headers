// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERSETRATEOPTIONS_H
#define AVPLAYERSETRATEOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVPlayerSetRateOptions : NSObject <NSCopying>



@property (nonatomic) BOOL preferCoordinatedPlaybackBehavior; // ivar: _preferCoordinatedPlaybackBehavior


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif