// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADMOVIE_H
#define OADMOVIE_H

@class NSData, NSString;


#import "OCDDelayedMedia.h"

@interface OADMovie : OCDDelayedMedia

@property (retain) NSData *data; // ivar: mData
@property BOOL isAudioOnly; // ivar: mIsAudioOnly
@property BOOL loop; // ivar: loop
@property float movieEndPoint; // ivar: mEnd
@property float movieStartPoint; // ivar: mStart
@property (retain) NSString *name; // ivar: mName


-(id)description;


@end


#endif