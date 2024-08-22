// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUFITHEIGHTSCALEPOLICY_H
#define NUFITHEIGHTSCALEPOLICY_H

@class NSString;
@protocol NUScalePolicy;

#import <Foundation/Foundation.h>


@interface NUFitHeightScalePolicy : NSObject <NUScalePolicy>

 {
    NSInteger _height;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithHeight:(NSInteger)arg0 ;
-(struct ? )scaleForImageSize:(struct ? )arg0 ;


@end


#endif