// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUFITWIDTHSCALEPOLICY_H
#define NUFITWIDTHSCALEPOLICY_H

@class NSString;
@protocol NUScalePolicy;

#import <Foundation/Foundation.h>


@interface NUFitWidthScalePolicy : NSObject <NUScalePolicy>

 {
    NSInteger _width;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithWidth:(NSInteger)arg0 ;
-(struct ? )scaleForImageSize:(struct ? )arg0 ;


@end


#endif