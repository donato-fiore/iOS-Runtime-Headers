// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADSOUND_H
#define OADSOUND_H

@class NSData, NSString;


#import "OCDDelayedMedia.h"

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}




-(BOOL)isLoaded;
-(id)description;
-(id)name;
-(id)soundData;
-(int)sizeInBytes;
-(void)setName:(id)arg0 ;
-(void)setSizeInBytes:(int)arg0 ;
-(void)setSoundData:(id)arg0 ;


@end


#endif