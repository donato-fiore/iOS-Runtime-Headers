// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMEMORIESFEEDLAYOUTGENERATOR_H
#define PXMEMORIESFEEDLAYOUTGENERATOR_H



#import "PXLayoutGenerator.h"
#import "PXMemoriesFeedLayoutMetrics.h"

@interface PXMemoriesFeedLayoutGenerator : PXLayoutGenerator

@property (nonatomic) BOOL includeDateHeader; // ivar: _includeDateHeader
@property (nonatomic) BOOL isFirstHeader; // ivar: _isFirstHeader
@property (copy, nonatomic) PXMemoriesFeedLayoutMetrics *metrics;


-(id)initWithMetrics:(id)arg0 ;


@end


#endif