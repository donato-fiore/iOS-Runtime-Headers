// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPRESENTATIONTIMINGCURVEPROVIDER_H
#define PKDASHBOARDPRESENTATIONTIMINGCURVEPROVIDER_H

@class UICubicTimingParameters, UISpringTimingParameters;
@protocol UITimingCurveProvider;

#import <Foundation/Foundation.h>


@interface PKDashboardPresentationTimingCurveProvider : NSObject <UITimingCurveProvider>



@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic) CGFloat fractionComplete; // ivar: _fractionComplete
@property (readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property (readonly, nonatomic) NSInteger timingCurveType;
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif