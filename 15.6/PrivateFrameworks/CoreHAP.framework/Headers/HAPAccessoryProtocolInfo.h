// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPACCESSORYPROTOCOLINFO_H
#define HAPACCESSORYPROTOCOLINFO_H

@class HMFObject, NSNumber, NSString, HMFVersion, NSData;



@interface HAPAccessoryProtocolInfo : HMFObject

@property (readonly, nonatomic) unsigned short categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, nonatomic) NSNumber *currentConfigNumber; // ivar: _currentConfigNumber
@property (readonly, nonatomic) NSNumber *currentStateNumber; // ivar: _currentStateNumber
@property (readonly, nonatomic) NSString *deviceIdentifer; // ivar: _deviceIdentifer
@property (readonly, nonatomic) unsigned char featureFlags; // ivar: _featureFlags
@property (readonly, nonatomic) NSString *modelName; // ivar: _modelName
@property (readonly, nonatomic) HMFVersion *protocolVersion; // ivar: _protocolVersion
@property (readonly, nonatomic) NSData *setupHash; // ivar: _setupHash
@property (readonly, nonatomic) unsigned char statusFlags; // ivar: _statusFlags


-(id)initWithIdentifier:(id)arg0 currentStateNumber:(id)arg1 currentConfigNumber:(id)arg2 modelName:(id)arg3 protocolVersion:(id)arg4 authMethods:(unsigned char)arg5 statusFlags:(unsigned char)arg6 categoryIdentifier:(unsigned short)arg7 setupHash:(id)arg8 ;


@end


#endif