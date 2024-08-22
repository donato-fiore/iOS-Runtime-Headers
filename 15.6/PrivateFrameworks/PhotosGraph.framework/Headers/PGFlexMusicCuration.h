// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFLEXMUSICCURATION_H
#define PGFLEXMUSICCURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PGFlexMusicCuration : NSObject {
    ? curatorVersion;
    ? bestSongSuggestions;
    ? secondarySongSuggestions;
}


@property (nonatomic, readonly) NSArray *bestSongSuggestions;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *secondarySongSuggestions;


-(id)init;
-(id)jsonRepresentation;


@end


#endif