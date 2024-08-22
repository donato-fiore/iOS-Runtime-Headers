// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOLUMNCALCULATOR_H
#define SXCOLUMNCALCULATOR_H

@class NSString;
@protocol SXColumnCalculator;

#import <Foundation/Foundation.h>


@interface SXColumnCalculator : NSObject <SXColumnCalculator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)columnLayoutWithConstrainedViewportSize:(struct CGSize )arg0 scaledConstrainedViewportSize:(struct CGSize )arg1 viewportSize:(struct CGSize )arg2 documentLayout:(id)arg3 contentScaleFactor:(CGFloat)arg4 ;
-(id)columnLayoutWithConstrainedViewportSize:(struct CGSize )arg0 viewportSize:(struct CGSize )arg1 documentLayout:(id)arg2 ;
-(id)columnLayoutWithViewportSize:(struct CGSize )arg0 constrainedToWidth:(CGFloat)arg1 documentLayout:(id)arg2 contentScaleFactor:(CGFloat)arg3 ;


@end


#endif