// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPICTUREINPICTUREPREROLLATTRIBUTES_H
#define AVPICTUREINPICTUREPREROLLATTRIBUTES_H

@class PGPlaybackStatePrerollAttributes, UIColor;

#import <Foundation/Foundation.h>


@interface AVPictureInPicturePrerollAttributes : NSObject

@property (readonly, nonatomic) PGPlaybackStatePrerollAttributes *pegasusAttributes; // ivar: _pegasusAttributes
@property (readonly, nonatomic) UIColor *preferredTintColor;
@property (readonly, nonatomic) ? requiredLinearPlaybackEndTime; // ivar: _requiredLinearPlaybackEndTime


+(id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(struct ? )arg0 preferredTintColor:(id)arg1 ;
+(id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(struct ? )arg0 preferredTintColor:(id)arg1 ;
-(id)initWithPlaybackStatePrerollAttributes:(id)arg0 requiredLinearPlaybackEndTime:(struct ? )arg1 ;


@end


#endif