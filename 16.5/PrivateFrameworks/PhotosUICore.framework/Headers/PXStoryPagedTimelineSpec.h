// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPAGEDTIMELINESPEC_H
#define PXSTORYPAGEDTIMELINESPEC_H


#import <Foundation/Foundation.h>


@interface PXStoryPagedTimelineSpec : NSObject

@property (nonatomic) BOOL displayOneAssetPerPage; // ivar: _displayOneAssetPerPage
@property (nonatomic) CGFloat keyInterpageSpacing; // ivar: _keyInterpageSpacing
@property (nonatomic) CGSize keyPageSize; // ivar: _keyPageSize
@property (nonatomic) CGFloat regularInterpageSpacing; // ivar: _regularInterpageSpacing
@property (nonatomic) CGSize regularPageSize; // ivar: _regularPageSize


-(id)description;


@end


#endif