// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAPFSDISK_H
#define SKAPFSDISK_H

@class NSString;
@protocol SKEncryptedDiskProtocol;


#import "SKDisk.h"

@interface SKAPFSDisk : SKDisk <SKEncryptedDiskProtocol>



@property (retain) NSString *apfsRole; // ivar: _apfsRole
@property (readonly) NSString *apfsUUID;
@property (retain) NSString *apfsVolumeGroupUUID; // ivar: _apfsVolumeGroupUUID
@property (readonly, copy) NSString *debugDescription;
@property BOOL defaultEffaceable; // ivar: _defaultEffaceable
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isEncrypted; // ivar: _isEncrypted
@property NSUInteger quotaSpace; // ivar: _quotaSpace
@property NSUInteger reserveSpace; // ivar: _reserveSpace
@property (readonly) Class superclass;
@property NSUInteger usedSpace; // ivar: _usedSpace


-(id)container;
-(id)dictionaryRepresentation;
-(id)getAPFSVolumeRole;
-(id)innerDescription;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif