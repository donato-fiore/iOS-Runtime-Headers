// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUINAVIGATIONLISTVIEWCELLHEIGHTESTIMATOR_H
#define CNUINAVIGATIONLISTVIEWCELLHEIGHTESTIMATOR_H

@class NSNumber;
@protocol CNUINavigationListStyle;

#import <Foundation/Foundation.h>


@interface CNUINavigationListViewCellHeightEstimator : NSObject

@property (readonly, nonatomic) CGFloat estimatedCellHeight;
@property (retain, nonatomic) NSNumber *estimatedCellHeightNumber; // ivar: _estimatedCellHeightNumber
@property (readonly, nonatomic) CGFloat estimatedDetailCellHeight;
@property (retain, nonatomic) NSNumber *estimatedDetailCellHeightNumber; // ivar: _estimatedDetailCellHeightNumber
@property (retain, nonatomic) NSObject<CNUINavigationListStyle> *navigationListStyle; // ivar: _navigationListStyle


-(id)initWithNavigationListStyle:(id)arg0 ;


@end


#endif