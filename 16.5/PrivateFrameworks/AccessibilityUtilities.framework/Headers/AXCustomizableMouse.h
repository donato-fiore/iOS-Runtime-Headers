// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXCUSTOMIZABLEMOUSE_H
#define AXCUSTOMIZABLEMOUSE_H

@class NSMutableDictionary, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXCustomizableMouse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *buttonMap; // ivar: _buttonMap
@property (readonly, nonatomic) NSArray *buttonsWithCustomActions;
@property (readonly, nonatomic) BOOL customActionsRequireAssistiveTouch;
@property (readonly, nonatomic) BOOL hasCustomActions;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger productId; // ivar: _productId
@property (readonly, nonatomic) NSInteger vendorId; // ivar: _vendorId


+(BOOL)supportsSecureCoding;
+(id)_existingMouseForIdentifier:(id)arg0 vendorId:(NSInteger)arg1 productId:(NSInteger)arg2 ;
+(id)_newOrExistingMouseForIdentifier:(id)arg0 name:(id)arg1 vendorId:(id)arg2 productId:(id)arg3 ;
+(id)deserialize:(id)arg0 ;
+(id)mouseForHIDDevice:(struct __IOHIDDevice *)arg0 ;
+(id)mouseForHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
+(id)serialize:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentifier:(id)arg0 vendorId:(NSInteger)arg1 productId:(NSInteger)arg2 ;
-(BOOL)isEqualToMouse:(id)arg0 ;
-(NSUInteger)hash;
-(id)customActionForButtonNumber:(NSInteger)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 vendorId:(NSInteger)arg2 productId:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCustomAction:(id)arg0 forButtonNumber:(NSInteger)arg1 ;
-(void)setDefaultActionForButtonNumber:(NSInteger)arg0 ;


@end


#endif