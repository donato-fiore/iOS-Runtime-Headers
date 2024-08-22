// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGPPTLAYOUTTESTERITEMINPUT_H
#define PXGPPTLAYOUTTESTERITEMINPUT_H

@class NSString;
@protocol PXLayoutItemInput;

#import <Foundation/Foundation.h>


@interface PXGPPTLayoutTesterItemInput : NSObject <PXLayoutItemInput>

 {
    CGSize _size;
    CGFloat _weight;
    CGRect _preferredCropRect;
    CGRect _acceptableCropRect;
}


@property (readonly, nonatomic) CGRect acceptableCropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint positionOffset;
@property (readonly, nonatomic) CGRect preferredCropRect;
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGAffineTransform transform;
@property (readonly, nonatomic) CGFloat weight;


+(id)createItemInputsForCount:(NSInteger)arg0 ;
-(CGFloat)weightUsingCriterion:(NSInteger)arg0 ;


@end


#endif