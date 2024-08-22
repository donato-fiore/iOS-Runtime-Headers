// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTFLEXIBLESIZERANGEPROVIDER_H
#define CKCOMPONENTFLEXIBLESIZERANGEPROVIDER_H

@class NSString;
@protocol CKComponentSizeRangeProviding;

#import <Foundation/Foundation.h>


@interface CKComponentFlexibleSizeRangeProvider : NSObject <CKComponentSizeRangeProviding>

 {
    NSInteger _flexibility;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)providerWithFlexibility:(NSInteger)arg0 ;
-(id)init;
-(id)initWithFlexibility:(NSInteger)arg0 ;
-(struct CKSizeRange )sizeRangeForBoundingSize:(struct CGSize )arg0 ;


@end


#endif