// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKINTERFACEOBJECT_H
#define WKINTERFACEOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WKInterfaceObject : NSObject

@property (copy, nonatomic) NSString *interfaceProperty; // ivar: _interfaceProperty
@property (retain, nonatomic) NSString *propertyIndex; // ivar: _propertyIndex
@property (nonatomic) NSInteger rowIndex; // ivar: _rowIndex
@property (nonatomic) NSInteger tableIndex; // ivar: _tableIndex
@property (copy, nonatomic) NSString *viewControllerID; // ivar: _viewControllerID


-(id)_initWithInterfaceProperty:(id)arg0 viewControllerID:(id)arg1 propertyIndex:(NSInteger)arg2 tableIndex:(NSInteger)arg3 rowIndex:(NSInteger)arg4 ;
-(id)init;
-(void)_sendValueChanged:(id)arg0 ;
-(void)_sendValueChanged:(id)arg0 forProperty:(id)arg1 ;
-(void)_setImage:(id)arg0 forProperty:(id)arg1 ;
-(void)_setImageData:(id)arg0 forProperty:(id)arg1 ;
-(void)_setImageNamed:(id)arg0 forProperty:(id)arg1 ;
-(void)_setupWithDescription:(id)arg0 forController:(id)arg1 ;
-(void)didRegisterWithRemoteInterface;
-(void)setAccessibilityHint:(id)arg0 ;
-(void)setAccessibilityIdentifier:(id)arg0 ;
-(void)setAccessibilityImageRegions:(id)arg0 ;
-(void)setAccessibilityLabel:(id)arg0 ;
-(void)setAccessibilityTraits:(NSUInteger)arg0 ;
-(void)setAccessibilityValue:(id)arg0 ;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setHeight:(CGFloat)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setHorizontalAlignment:(NSInteger)arg0 ;
-(void)setIsAccessibilityElement:(BOOL)arg0 ;
-(void)setRelativeHeight:(CGFloat)arg0 withAdjustment:(CGFloat)arg1 ;
-(void)setRelativeWidth:(CGFloat)arg0 withAdjustment:(CGFloat)arg1 ;
-(void)setRotation:(CGFloat)arg0 ;
-(void)setVerticalAlignment:(NSInteger)arg0 ;
-(void)setWidth:(CGFloat)arg0 ;
-(void)sizeToFitHeight;
-(void)sizeToFitWidth;


@end


#endif