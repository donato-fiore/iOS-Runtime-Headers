// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDCAMERACELLLAYOUTOPTIONS_H
#define HUGRIDCAMERACELLLAYOUTOPTIONS_H



#import "HUGridCellLayoutOptions.h"

@interface HUGridCameraCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) CGFloat cameraViewAspectRatio; // ivar: _cameraViewAspectRatio
@property (nonatomic) CGFloat cellHeight; // ivar: _cellHeight
@property (nonatomic) CGFloat headerHorizontalInnerMargins; // ivar: _headerHorizontalInnerMargins
@property (nonatomic) CGFloat headerViewHeight; // ivar: _headerViewHeight


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif