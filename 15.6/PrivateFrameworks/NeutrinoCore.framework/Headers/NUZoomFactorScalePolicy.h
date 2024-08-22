// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUZOOMFACTORSCALEPOLICY_H
#define NUZOOMFACTORSCALEPOLICY_H

@class NSString;
@protocol NUScalePolicy;

#import <Foundation/Foundation.h>


@interface NUZoomFactorScalePolicy : NSObject <NUScalePolicy>

 {
    CGFloat _zoomFactor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithZoomFactor:(CGFloat)arg0 ;
-(struct ? )scaleForImageSize:(struct ? )arg0 ;


@end


#endif