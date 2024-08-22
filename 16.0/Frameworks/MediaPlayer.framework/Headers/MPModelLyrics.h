// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELLYRICS_H
#define MPMODELLYRICS_H

@class NSString;


#import "MPModelObject.h"

@interface MPModelLyrics : MPModelObject

@property (copy, nonatomic) NSString *TTML;
@property (nonatomic) BOOL hasLibraryLyrics;
@property (nonatomic) BOOL hasStoreLyrics;
@property (nonatomic) BOOL hasTimeSyncedLyrics;
@property (copy, nonatomic) NSString *text;




@end


#endif