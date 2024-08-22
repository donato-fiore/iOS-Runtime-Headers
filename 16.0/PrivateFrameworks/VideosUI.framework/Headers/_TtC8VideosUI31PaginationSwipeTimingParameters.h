// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI31PAGINATIONSWIPETIMINGPARAMETERS_H
#define _TTC8VIDEOSUI31PAGINATIONSWIPETIMINGPARAMETERS_H

@class UICubicTimingParameters, UISpringTimingParameters;
@protocol UITimingCurveProvider;

#import <Foundation/Foundation.h>


@interface _TtC8VideosUI31PaginationSwipeTimingParameters : NSObject <UITimingCurveProvider>

 {
    ? swipeAnimationType;
}


@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;
@property (nonatomic, readonly) NSInteger timingCurveType;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif