// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUVIDEOEDITREVIEWASSET_H
#define PUVIDEOEDITREVIEWASSET_H

@class NSString;


#import "PUReviewAsset.h"

@interface PUVideoEditReviewAsset : PUReviewAsset {
    NSString *_trimmedVideoPath;
}




-(id)initWithReviewAsset:(id)arg0 trimmedVideoPath:(id)arg1 ;
-(id)pathForTrimmedVideoFile;


@end


#endif