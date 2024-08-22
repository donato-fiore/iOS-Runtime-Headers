// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUPIXELCOUNTSCALEPOLICY_H
#define NUPIXELCOUNTSCALEPOLICY_H

@class NSString;
@protocol NUScalePolicy;

#import <Foundation/Foundation.h>


@interface NUPixelCountScalePolicy : NSObject <NUScalePolicy>

 {
    NSInteger _totalPixelCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithTargetPixelCount:(NSInteger)arg0 ;
-(struct ? )scaleForImageSize:(struct ? )arg0 ;


@end


#endif