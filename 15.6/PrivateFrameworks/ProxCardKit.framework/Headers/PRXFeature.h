// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRXFEATURE_H
#define PRXFEATURE_H

@class NSString, UIImage, UIView, UISwitch, UIColor;

#import <Foundation/Foundation.h>


@interface PRXFeature : NSObject

@property (readonly, copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) UIView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat imageViewSize; // ivar: _imageViewSize
@property (nonatomic, getter=isOn) BOOL on; // ivar: _on
@property (weak, nonatomic) UISwitch *switchControl; // ivar: _switchControl
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)featureWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
+(id)featureWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 tintColor:(id)arg3 ;
+(id)optionalFeatureWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 tintColor:(id)arg3 valueChangedBlock:(id)arg4 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 tintColor:(id)arg3 valueChangedBlock:(id)arg4 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 imageView:(id)arg2 valueChangedBlock:(id)arg3 ;


@end


#endif