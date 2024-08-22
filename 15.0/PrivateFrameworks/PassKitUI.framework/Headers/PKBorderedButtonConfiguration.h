// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBORDEREDBUTTONCONFIGURATION_H
#define PKBORDEREDBUTTONCONFIGURATION_H

@class UIButtonConfiguration, UIColor;



@interface PKBorderedButtonConfiguration : UIButtonConfiguration

@property (nonatomic) NSUInteger border; // ivar: _border
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth


+(id)filledButtonConfiguration;
+(id)grayButtonConfiguration;
+(id)plainButtonConfiguration;
+(id)tintedButtonConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_initializeDefaults;


@end


#endif