// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTCINEMATOGRAPHYREFINEMENTOPTIONS_H
#define PTCINEMATOGRAPHYREFINEMENTOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PTGlobalCinematographyMetadata.h"
#import "PTCinematographyFocusFramesOptions.h"

@interface PTCinematographyRefinementOptions : NSObject <NSCopying>

 {
    PTGlobalCinematographyMetadata *_globalMetadata;
}


@property (nonatomic) BOOL disableDetectionSmoothing; // ivar: _disableDetectionSmoothing
@property (retain) PTCinematographyFocusFramesOptions *focusFramesOptions; // ivar: _focusFramesOptions
@property (copy, nonatomic) PTGlobalCinematographyMetadata *globalMetadata;
@property (nonatomic) ? rackFocusPullTime;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif