// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPRATINGCOMMAND_H
#define MPRATINGCOMMAND_H



#import "MPRemoteCommand.h"

@interface MPRatingCommand : MPRemoteCommand

@property (nonatomic) float maximumRating; // ivar: _maximumRating
@property (nonatomic) float minimumRating; // ivar: _minimumRating


-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithRating:(float)arg0 ;


@end


#endif