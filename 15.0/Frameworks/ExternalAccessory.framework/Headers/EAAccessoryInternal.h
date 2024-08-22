// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EAACCESSORYINTERNAL_H
#define EAACCESSORYINTERNAL_H

@class NSLock, NSMutableArray, NSDictionary, NSString, NSArray, NSData;
@protocol EAAccessoryDelegate;

#import <Foundation/Foundation.h>


@interface EAAccessoryInternal : NSObject {
    NSLock *_locationLock;
    NSMutableArray *_sessionsList;
}


@property (copy) id *WiFiCredentialsCompletionBlock; // ivar: _WiFiCredentialsCompletionBlock
@property (retain, nonatomic) NSDictionary *audioPorts; // ivar: _audioPorts
@property (copy, nonatomic) NSString *bonjourName; // ivar: _bonjourName
@property (retain, nonatomic) NSArray *cameraComponents; // ivar: _cameraComponents
@property (nonatomic) unsigned int capabilities; // ivar: _capabilities
@property (copy, nonatomic) NSData *certData; // ivar: _certData
@property (copy, nonatomic) NSData *certSerial; // ivar: _certSerial
@property (nonatomic) int classType; // ivar: _classType
@property (nonatomic) BOOL connected; // ivar: _connected
@property (nonatomic) unsigned int connectionID; // ivar: _connectionID
@property (copy, nonatomic) NSString *coreAccessoryPrimaryUUID; // ivar: _coreAccessoryPrimaryUUID
@property BOOL createdByCoreAccessories; // ivar: _createdByCoreAccessories
@property (nonatomic) NSObject<EAAccessoryDelegate> *delegate; // ivar: _delegate
@property NSUInteger destinationSharingOptions; // ivar: _destinationSharingOptions
@property (copy, nonatomic) NSString *dockType; // ivar: _dockType
@property (retain, nonatomic) NSMutableArray *enqueuedNMEASentences; // ivar: _enqueuedNMEASentences
@property (nonatomic) unsigned int eqIndex; // ivar: _eqIndex
@property (retain, nonatomic) NSArray *eqNames; // ivar: _eqNames
@property (copy, nonatomic) NSString *firmwareRevisionActive; // ivar: _firmwareRevisionActive
@property (copy, nonatomic) NSString *firmwareRevisionPending; // ivar: _firmwareRevisionPending
@property (copy, nonatomic) NSString *hardwareRevision; // ivar: _hardwareRevision
@property (nonatomic) BOOL hasIPConnection; // ivar: _hasIPConnection
@property (nonatomic) BOOL isAvailableOverBonjour; // ivar: _isAvailableOverBonjour
@property (nonatomic) int locationSentenceTypesMask; // ivar: _locationSentenceTypesMask
@property (copy, nonatomic) NSString *macAddress; // ivar: _macAddress
@property (copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (copy, nonatomic) NSString *modelNumber; // ivar: _modelNumber
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL notPresentInIAPAccessoriesArray; // ivar: _notPresentInIAPAccessoriesArray
@property (copy) id *pairingCompletionBlock; // ivar: _pairingCompletionBlock
@property BOOL pointOfInterestHandoffEnabled; // ivar: _pointOfInterestHandoffEnabled
@property (copy, nonatomic) NSString *ppid; // ivar: _ppid
@property (copy, nonatomic) NSString *preferredApp; // ivar: _preferredApp
@property (copy, nonatomic) NSDictionary *protocolDetails; // ivar: _protocolDetails
@property (retain, nonatomic) NSDictionary *protocols; // ivar: _protocols
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, nonatomic) NSArray *sessionsList;
@property (nonatomic) NSInteger transportType; // ivar: _transportType
@property (retain, nonatomic) NSDictionary *vehicleInfoInitialData; // ivar: _vehicleInfoInitialData
@property (retain, nonatomic) NSDictionary *vehicleInfoSupportedTypes; // ivar: _vehicleInfoSupportedTypes


-(id)init;
-(void)addSession:(id)arg0 ;
-(void)dealloc;
-(void)removeSession:(id)arg0 ;


@end


#endif