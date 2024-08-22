// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWOUTLINECELLDISCLOSURECONFIGURATION_H
#define _UICOLLECTIONVIEWOUTLINECELLDISCLOSURECONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIImage.h"

@interface _UICollectionViewOutlineCellDisclosureConfiguration : NSObject <NSCopying>

 {
    id *_disclosureWasTappedHandler;
}


@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) CGFloat animationRotationAngle; // ivar: _animationRotationAngle
@property (retain, nonatomic) UIColor *disclosureColor; // ivar: _disclosureColor
@property (retain, nonatomic) UIImage *image; // ivar: _image


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithImage:(id)arg0 alignment:(NSInteger)arg1 ;
-(id)initWithImage:(id)arg0 alignment:(NSInteger)arg1 animationRotationAngle:(CGFloat)arg2 disclosureColor:(id)arg3 disclosureWasTappedHandler:(id)arg4 ;


@end


#endif