// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPIFINGERMODEL_H
#define AXPIFINGERMODEL_H

@protocol AXPIFingerModelDelegate;

#import <Foundation/Foundation.h>


@interface AXPIFingerModel : NSObject

@property (retain, nonatomic) NSObject<AXPIFingerModelDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat force; // ivar: _force
@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) NSUInteger shape; // ivar: _shape


+(id)fingerModelForLocation:(struct CGPoint )arg0 ;
-(id)description;
-(void)updateWithPropertiesFromFingerModel:(id)arg0 ;


@end


#endif