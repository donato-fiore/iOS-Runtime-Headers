// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLVIEWPROFILE_H
#define HUQUICKCONTROLVIEWPROFILE_H

@class UIColor;
@protocol NSCopying, HFIconDescriptor, HFDynamicFormattingValue;

#import <Foundation/Foundation.h>


@interface HUQuickControlViewProfile : NSObject <NSCopying>



@property (nonatomic) NSUInteger controlSize; // ivar: _controlSize
@property (retain, nonatomic) NSObject<HFIconDescriptor> *decorationIconDescriptor; // ivar: _decorationIconDescriptor
@property (readonly, nonatomic) CGFloat gestureDragCoefficient;
@property (nonatomic) NSUInteger orientation; // ivar: _orientation
@property (retain, nonatomic) NSObject<HFDynamicFormattingValue> *supplementaryFormattedValue; // ivar: _supplementaryFormattedValue
@property (readonly, nonatomic) BOOL supportsTouchContinuation;
@property (nonatomic) NSUInteger suspendedState; // ivar: _suspendedState
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif