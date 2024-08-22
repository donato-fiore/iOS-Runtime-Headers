// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORANIMATEDIMAGEMETADATA_H
#define BLASTDOORANIMATEDIMAGEMETADATA_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BlastDoorAnimatedImageMetadata : NSObject {
    ? animatedImageMetadata;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *durations;
@property (nonatomic, readonly) CGSize pixelSize;


-(id)init;


@end


#endif