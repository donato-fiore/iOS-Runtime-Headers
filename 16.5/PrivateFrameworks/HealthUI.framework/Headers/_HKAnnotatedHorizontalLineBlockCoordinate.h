// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKANNOTATEDHORIZONTALLINEBLOCKCOORDINATE_H
#define _HKANNOTATEDHORIZONTALLINEBLOCKCOORDINATE_H

@class NSString;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface _HKAnnotatedHorizontalLineBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGPoint endPoint; // ivar: _endPoint
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint startPoint; // ivar: _startPoint
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly, nonatomic) NSInteger styleIdentifier; // ivar: _styleIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 styleIdentifier:(NSInteger)arg2 userInfo:(id)arg3 ;


@end


#endif