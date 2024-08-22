// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUBONJOURDEVICE_H
#define CUBONJOURDEVICE_H

@class NSDictionary, NSUUID, NSString, NSData;

#import <Foundation/Foundation.h>


@interface CUBonjourDevice : NSObject {
    unsigned char _deviceIDBytes;
}


@property (copy, nonatomic) NSDictionary *deviceInfo; // ivar: _deviceInfo
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *identifierStr; // ivar: _identifierStr
@property (copy, nonatomic) NSUUID *identifierUUID; // ivar: _identifierUUID
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) NSData *txtData; // ivar: _txtData
@property (readonly, copy, nonatomic) NSDictionary *txtDictionary; // ivar: _txtDictionary


-(id)copyConnectionInfoWithFlags:(NSUInteger)arg0 interfaceName:(id)arg1 error:(*id)arg2 ;
-(id)copyConnectionStringWithFlags:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)shortDescription;
-(unsigned int)updateWithBonjourDeviceInfo:(id)arg0 ;
-(void)_updateTXTDictionary:(id)arg0 ;
-(void)reconfirm;


@end


#endif