// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDTRENDLINE_H
#define CHDTRENDLINE_H


#import <Foundation/Foundation.h>

#import "OADGraphicProperties.h"
#import "CHDTrendlineLabel.h"
#import "EDString.h"

@interface CHDTrendline : NSObject {
    BOOL mDisplayEquation;
    BOOL mDisplayRSquaredValue;
    CGFloat mBackward;
    CGFloat mForward;
    CGFloat mInterceptYAxis;
    int mPolynomialOrder;
    NSInteger mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}




+(id)trendline;
-(BOOL)isDisplayEquation;
-(BOOL)isDisplayRSquaredValue;
-(CGFloat)backward;
-(CGFloat)forward;
-(CGFloat)interceptYAxis;
-(NSInteger)movingAveragePeriod;
-(id)defaultNameWithSeriesName:(id)arg0 ;
-(id)description;
-(id)graphicProperties;
-(id)init;
-(id)label;
-(id)name;
-(int)polynomialOrder;
-(int)type;
-(void)setBackward:(CGFloat)arg0 ;
-(void)setDisplayEquation:(BOOL)arg0 ;
-(void)setDisplayRSquaredValue:(BOOL)arg0 ;
-(void)setForward:(CGFloat)arg0 ;
-(void)setGraphicProperties:(id)arg0 ;
-(void)setInterceptYAxis:(CGFloat)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setMovingAveragePeriod:(NSInteger)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setPolynomialOrder:(int)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif