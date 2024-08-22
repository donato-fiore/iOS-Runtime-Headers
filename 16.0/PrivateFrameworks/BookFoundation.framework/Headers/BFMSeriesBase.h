// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFMSERIESBASE_H
#define BFMSERIESBASE_H

@protocol BFMSeries;


#import "BCMResource.h"

@interface BFMSeriesBase : BCMResource <BFMSeries>



@property (nonatomic, readonly) BOOL isAudiobookSeries;
@property (nonatomic, readonly) BOOL isBookSeries;
@property (nonatomic, readonly) NSInteger type;




@end


#endif