// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKPREQUESTOPERATIONHEADER_H
#define FCCKPREQUESTOPERATIONHEADER_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "FCCKPIdentifier.h"
#import "FCCKPLocale.h"

@interface FCCKPRequestOperationHeader : PBCodable <NSCopying>

 {
    NSUInteger _applicationConfigVersion;
    NSUInteger _deviceFlowControlBudget;
    NSUInteger _deviceFlowControlBudgetCap;
    NSUInteger _deviceProtocolVersion;
    NSUInteger _globalConfigVersion;
    NSUInteger _operationGroupQuantity;
    NSString *_applicationBundle;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    NSString *_applicationVersion;
    NSData *_clientChangeToken;
    NSString *_deviceAssignedName;
    NSString *_deviceFlowControlKey;
    float _deviceFlowControlRegeneration;
    NSString *_deviceHardwareID;
    NSString *_deviceHardwareVersion;
    FCCKPIdentifier *_deviceIdentifier;
    NSString *_deviceLibraryName;
    NSString *_deviceLibraryVersion;
    NSString *_deviceSoftwareVersion;
    int _isolationLevel;
    FCCKPLocale *_locale;
    NSString *_mmcsProtocolVersion;
    NSString *_operationGroupName;
    int _targetDatabase;
    NSString *_userIDContainerID;
    BOOL _deviceSoftwareIsAppleInternal;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif