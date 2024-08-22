// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCAR_H
#define INCAR_H

@class NSString, NSArray;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INCarHeadUnit.h"

@interface INCar : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *carIdentifier; // ivar: _carIdentifier
@property (readonly, nonatomic) *CGColor color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INCarHeadUnit *headUnit; // ivar: _headUnit
@property (readonly, copy, nonatomic) NSString *make; // ivar: _make
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (readonly, copy, nonatomic) NSArray *powerPerConnectors; // ivar: _powerPerConnectors
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *supportedChargingConnectors; // ivar: _supportedChargingConnectors
@property (readonly, copy, nonatomic) NSString *year; // ivar: _year


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCarIdentifier:(id)arg0 displayName:(id)arg1 year:(id)arg2 make:(id)arg3 model:(id)arg4 color:(struct CGColor *)arg5 headUnit:(id)arg6 supportedChargingConnectors:(id)arg7 ;
-(id)initWithCarIdentifier:(id)arg0 displayName:(id)arg1 year:(id)arg2 make:(id)arg3 model:(id)arg4 color:(struct CGColor *)arg5 headUnit:(id)arg6 supportedChargingConnectors:(id)arg7 powerPerConnectors:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(id)maximumPowerForChargingConnectorType:(id)arg0 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMaximumPower:(id)arg0 forChargingConnectorType:(id)arg1 ;


@end


#endif