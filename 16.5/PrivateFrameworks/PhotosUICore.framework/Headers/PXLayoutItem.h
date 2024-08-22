// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLAYOUTITEM_H
#define PXLAYOUTITEM_H

@class NSString;
@protocol PXLayoutItemInput;

#import <Foundation/Foundation.h>


@interface PXLayoutItem : NSObject <PXLayoutItemInput>



@property (nonatomic) CGRect acceptableCropRect; // ivar: _acceptableCropRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint positionOffset; // ivar: _positionOffset
@property (nonatomic) CGRect preferredCropRect; // ivar: _preferredCropRect
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform; // ivar: _transform
@property (nonatomic) CGFloat weight; // ivar: _weight


-(CGFloat)weightUsingCriterion:(NSInteger)arg0 ;
-(id)init;
-(id)initWithSize:(struct CGSize )arg0 weight:(CGFloat)arg1 ;


@end


#endif