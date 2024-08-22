// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPACCESSORY_H
#define UARPACCESSORY_H

@class NSMutableArray, NSMutableSet, NSArray, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "UARPAccessoryID.h"

@interface UARPAccessory : NSObject {
    UARPAccessoryID *_id;
    NSMutableArray *_internalPendingAssets;
    BOOL _reachable;
    BOOL _assetTransfersPaused;
    NSMutableSet *_pendingClientPropertyQueries;
    NSArray *_partnerSerialNumbers;
}


@property BOOL autoDownloadAllowed;
@property (copy) NSString *availableFirmwareVersion; // ivar: _availableFirmwareVersion
@property NSUInteger capability;
@property BOOL downloadOnCellularAllowed;
@property BOOL enableFirmwareDownloadOnDemand; // ivar: _enableFirmwareDownloadOnDemand
@property (copy) NSString *filepathCurrentAsset; // ivar: _filepathCurrentAsset
@property unsigned int firmwareUpdateBytesTotal; // ivar: _firmwareUpdateBytesTotal
@property unsigned int firmwareUpdateBytesTransferred; // ivar: _firmwareUpdateBytesTransferred
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *friendlyName;
@property (readonly) NSString *hwFusingType;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *modelName;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (readonly) NSString *serialNumber;
@property (copy) NSString *stagedFirmwareVersion;
@property (readonly) BOOL suppressAutomaticDynamicAssets;
@property NSInteger transport;
@property (readonly) NSUInteger uarpVersion;
@property BOOL userInitiatedFirmwareApply; // ivar: _userInitiatedFirmwareApply
@property BOOL userInitiatedFirmwareStaging; // ivar: _userInitiatedFirmwareStaging
@property NSUUID *uuid;


+(id)logger;
-(BOOL)assetTransfersPaused;
-(BOOL)clientQueryPendingForProperty:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reachable;
-(id)bsdNotifications;
-(id)description;
-(id)getID;
-(id)initWithHardwareID:(id)arg0 uuid:(id)arg1 ;
-(id)initWithID:(id)arg0 ;
-(id)initWithManufacturer:(id)arg0 modelName:(id)arg1 serialNumber:(id)arg2 firmwareVersion:(id)arg3 ;
-(id)initWithManufacturer:(id)arg0 modelName:(id)arg1 serialNumber:(id)arg2 firmwareVersion:(id)arg3 productGroup:(id)arg4 productNumber:(id)arg5 ;
-(id)initWithModelNumber:(id)arg0 ;
-(id)initWithProductGroup:(id)arg0 productNumber:(id)arg1 uuid:(id)arg2 ;
-(id)partnerSerialNumbers;
-(id)pendingAssets;
-(id)serviceBsdNotifications;
-(void)addPendingAsset:(id)arg0 ;
-(void)addPendingClientPropertyQuery:(NSUInteger)arg0 ;
-(void)removePendingAsset:(id)arg0 ;
-(void)removePendingClientPropertyQuery:(NSUInteger)arg0 ;
-(void)setAssetTransfersPaused:(BOOL)arg0 ;
-(void)setPartnerSerialNumbers:(id)arg0 ;
-(void)setReachable:(BOOL)arg0 ;


@end


#endif