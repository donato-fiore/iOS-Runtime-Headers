// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRMUTABLEDEVICECOLLECTION_H
#define NRMUTABLEDEVICECOLLECTION_H

@class NSMutableDictionary, NSUUID;
@protocol NRMutableStateParentDelegate, NSFastEnumeration;


#import "NRMutableStateBase.h"
#import "NRMutableDevice.h"
#import "NRPBMutableDeviceCollection.h"

@interface NRMutableDeviceCollection : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration>

 {
    NSMutableDictionary *_deviceCollection;
    NSMutableDictionary *_childMap;
}


@property (readonly, nonatomic) NRMutableDevice *activeDevice;
@property (retain, nonatomic) NSUUID *activeDeviceID;
@property (readonly, nonatomic, getter=allAltAccount) BOOL isAllAltAccount;
@property (readonly, nonatomic, getter=paired) BOOL isPaired;
@property (retain, nonatomic) NRPBMutableDeviceCollection *protobuf; // ivar: _protobuf


+(BOOL)supportsSecureCoding;
+(id)diffFrom:(id)arg0 to:(id)arg1 ;
+(void)parseDiff:(id)arg0 forPropertyChange:(id)arg1 withBlock:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)_diffsToChangeActiveDeviceToDeviceID:(id)arg0 ;
-(id)allPairingIDs;
-(id)applyDiff:(id)arg0 upOnly:(BOOL)arg1 notifyParent:(BOOL)arg2 unconditional:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceForPairingID:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)_createIndex;
-(void)child:(id)arg0 didApplyDiff:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)removeDeviceForPairingID:(id)arg0 ;
-(void)setDevice:(id)arg0 forPairingID:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif