// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AATRUSTEDDEVICE_H
#define AATRUSTEDDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AATrustedDevice : NSObject

@property (readonly, nonatomic) NSString *FMIPDeviceID; // ivar: _FMIPDeviceID
@property (readonly, nonatomic) NSString *backupUUID; // ivar: _backupUUID
@property (readonly, nonatomic) BOOL currentDevice; // ivar: _currentDevice
@property (readonly, nonatomic) NSString *detailDeviceName; // ivar: _detailDeviceName
@property (readonly, nonatomic) NSString *detailSubLabel; // ivar: _detailSubLabel
@property (readonly, nonatomic) NSString *deviceDetailHttpMethod; // ivar: _deviceDetailHttpMethod
@property (readonly, nonatomic) NSString *deviceDetailUri; // ivar: _deviceDetailUri
@property (readonly, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSString *deviceQualifiedClass; // ivar: _deviceQualifiedClass
@property (readonly, nonatomic) BOOL fmipEnabled; // ivar: _fmipEnabled
@property (readonly, nonatomic) BOOL injectNativeHeader; // ivar: _injectNativeHeader
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *modelDisplayName; // ivar: _modelDisplayName
@property (readonly, nonatomic) NSString *modelLargePhotoURL1x; // ivar: _modelLargePhotoURL1x
@property (readonly, nonatomic) NSString *modelLargePhotoURL2x; // ivar: _modelLargePhotoURL2x
@property (readonly, nonatomic) NSString *modelLargePhotoURL3x; // ivar: _modelLargePhotoURL3x
@property (readonly, nonatomic) NSString *modelSmallPhotoURL1x; // ivar: _modelSmallPhotoURL1x
@property (readonly, nonatomic) NSString *modelSmallPhotoURL2x; // ivar: _modelSmallPhotoURL2x
@property (readonly, nonatomic) NSString *modelSmallPhotoURL3x; // ivar: _modelSmallPhotoURL3x
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (readonly, nonatomic) NSString *rawLatestBackup; // ivar: _rawLatestBackup
@property (readonly, nonatomic) BOOL showBackupRow; // ivar: _showBackupRow
@property (readonly, nonatomic) BOOL showFMIPLink; // ivar: _showFMIPLink
@property (readonly, nonatomic) BOOL showFMIPRow; // ivar: _showFMIPRow


-(id)initWithDictionary:(id)arg0 ;
-(void)updateWithRUIClientInfo:(id)arg0 ;


@end


#endif