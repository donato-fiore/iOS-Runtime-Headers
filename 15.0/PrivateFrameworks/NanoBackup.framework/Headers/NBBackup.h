// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NBBACKUP_H
#define NBBACKUP_H

@class NSURL, NSNumber, NSString, NSDate, NSUUID, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NBBackup : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSURL *activeWatchFaceFileURL; // ivar: _activeWatchFaceFileURL
@property (retain, nonatomic) NSNumber *backingColor; // ivar: _backingColor
@property (nonatomic) NSUInteger backupType; // ivar: _backupType
@property (retain, nonatomic) NSNumber *bcmWindowMaterial; // ivar: _bcmWindowMaterial
@property (retain, nonatomic) NSNumber *bottomEnclosureMaterial; // ivar: _bottomEnclosureMaterial
@property (retain, nonatomic) NSNumber *coverGlassColor; // ivar: _coverGlassColor
@property (retain, nonatomic) NSString *deviceCSN; // ivar: _deviceCSN
@property (retain, nonatomic) NSString *deviceColor; // ivar: _deviceColor
@property (retain, nonatomic) NSString *deviceEnclosureColor; // ivar: _deviceEnclosureColor
@property (nonatomic, getter=isDiagnosticsOptInEnabled) BOOL diagnosticsOptInEnabled; // ivar: _diagnosticsOptInEnabled
@property (retain, nonatomic) NSNumber *fcmMaterial; // ivar: _fcmMaterial
@property (nonatomic) BOOL hasResolvedActiveWatchFaceFilePath; // ivar: _hasResolvedActiveWatchFaceFilePath
@property (retain, nonatomic) NSNumber *housingColor; // ivar: _housingColor
@property (retain, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (nonatomic, getter=isLocationOptInEnabled) BOOL locationOptInEnabled; // ivar: _locationOptInEnabled
@property (retain, nonatomic) NSString *marketingVersion; // ivar: _marketingVersion
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *productName; // ivar: _productName
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSNumber *sizeInBytes; // ivar: _sizeInBytes
@property (retain, nonatomic) NSString *systemBuildVersion; // ivar: _systemBuildVersion
@property (retain, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (retain, nonatomic) NSNumber *topEnclosureMaterial; // ivar: _topEnclosureMaterial
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSString *watchFace; // ivar: _watchFace
@property (retain, nonatomic) NSString *watchFaceColor; // ivar: _watchFaceColor
@property (retain, nonatomic) NSData *watchFaceData; // ivar: _watchFaceData


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif