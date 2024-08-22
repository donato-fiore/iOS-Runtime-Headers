// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUFILLSCALEPOLICY_H
#define NUFILLSCALEPOLICY_H

@class NSString;
@protocol NUScalePolicy;

#import <Foundation/Foundation.h>


@interface NUFillScalePolicy : NSObject <NUScalePolicy>

 {
    ? _size;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithTargetPixelSize:(struct ? )arg0 ;
-(id)initWithTargetSize:(struct CGSize )arg0 ;
-(struct ? )scaleForImageSize:(struct ? )arg0 ;


@end


#endif