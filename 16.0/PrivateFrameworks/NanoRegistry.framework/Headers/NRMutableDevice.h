// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRMUTABLEDEVICE_H
#define NRMUTABLEDEVICE_H

@class NSMutableDictionary, NSUUID;
@protocol NRMutableStateParentDelegate, NSFastEnumeration;


#import "NRMutableStateBase.h"
#import "NRPBMutableDevice.h"

@interface NRMutableDevice : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration>

 {
    NSMutableDictionary *_properties;
}


@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isAltAccount;
@property (readonly, nonatomic) BOOL isArchived;
@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, nonatomic) BOOL isSetup;
@property (readonly, nonatomic) BOOL migratable;
@property (readonly, nonatomic) NSUUID *pairingID;
@property (retain, nonatomic) NRPBMutableDevice *protobuf; // ivar: _protobuf


+(BOOL)supportsSecureCoding;
+(id)diffFrom:(id)arg0 to:(id)arg1 ;
+(id)diffsToActivate:(BOOL)arg0 withDate:(id)arg1 ;
+(id)diffsToClearStatusCodeAndCompatibilityState;
+(id)diffsToPair:(BOOL)arg0 withDate:(id)arg1 ;
+(id)diffsToSetStatusCode:(NSUInteger)arg0 ;
+(id)diffsToSetStatusCode:(NSUInteger)arg0 andCompatibilityState:(unsigned short)arg1 ;
+(id)enclosedClassTypes;
+(void)parseDiff:(id)arg0 forPropertyChange:(id)arg1 withBlock:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsCapability:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)_createIndex:(id)arg0 ;
-(id)allPropertyNames;
-(id)applyDiff:(id)arg0 upOnly:(BOOL)arg1 notifyParent:(BOOL)arg2 unconditional:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)propertyForName:(id)arg0 ;
-(void)child:(id)arg0 didApplyDiff:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)removePropertyForName:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setProperty:(id)arg0 forName:(id)arg1 ;


@end


#endif