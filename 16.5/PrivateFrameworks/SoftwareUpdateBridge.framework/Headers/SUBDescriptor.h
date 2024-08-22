// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUBDESCRIPTOR_H
#define SUBDESCRIPTOR_H

@class NSDate, NSError, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SUBDocumentation.h"

@interface SUBDescriptor : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *autoSUEndTime; // ivar: _autoSUEndTime
@property (retain, nonatomic) NSDate *autoSUStartTime; // ivar: _autoSUStartTime
@property (nonatomic) BOOL backgroundDownloadDisabledByServer; // ivar: _backgroundDownloadDisabledByServer
@property (retain, nonatomic) NSDate *dateOfLastScheduleOfAutoUpdate; // ivar: _dateOfLastScheduleOfAutoUpdate
@property (retain, nonatomic) NSDate *dateOfLastScheduleOfAutoUpdateNotification; // ivar: _dateOfLastScheduleOfAutoUpdateNotification
@property (retain, nonatomic) NSDate *dateOfLastSentInstallNotification; // ivar: _dateOfLastSentInstallNotification
@property (retain, nonatomic) NSError *denialReasons; // ivar: _denialReasons
@property (nonatomic) BOOL displayTermsRequested; // ivar: _displayTermsRequested
@property (retain, nonatomic) SUBDocumentation *documentation; // ivar: _documentation
@property (retain, nonatomic) NSString *documentationID; // ivar: _documentationID
@property (nonatomic) NSInteger downloadSize; // ivar: _downloadSize
@property (readonly, retain, nonatomic) NSString *humanReadableUpdateName;
@property (nonatomic) BOOL installTonightScheduled; // ivar: _installTonightScheduled
@property (nonatomic) NSInteger installationSize; // ivar: _installationSize
@property (nonatomic) BOOL isAwaitingAdmissionControlForInstallation; // ivar: _isAwaitingAdmissionControlForInstallation
@property (retain, nonatomic) NSData *manifest; // ivar: _manifest
@property (retain, nonatomic) NSString *marketingVersion; // ivar: _marketingVersion
@property (nonatomic) NSInteger msuPrepareSize; // ivar: _msuPrepareSize
@property (retain, nonatomic) NSString *osName; // ivar: _osName
@property (readonly, nonatomic) NSInteger preparationSize;
@property (retain, nonatomic) NSString *productBuildVersion; // ivar: _productBuildVersion
@property (retain, nonatomic) NSString *productSystemName; // ivar: _productSystemName
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSString *publisher; // ivar: _publisher
@property (nonatomic) NSInteger totalRequiredFreeSpace; // ivar: _totalRequiredFreeSpace
@property (nonatomic) NSInteger unarchivedSize; // ivar: _unarchivedSize
@property (nonatomic) BOOL userDidAcceptTermsAndConditions; // ivar: _userDidAcceptTermsAndConditions
@property (nonatomic) BOOL userDidManuallyTriggerInstall; // ivar: _userDidManuallyTriggerInstall
@property (nonatomic) NSInteger userInstallRequestType; // ivar: _userInstallRequestType
@property (nonatomic) BOOL willProceedWithInstallation; // ivar: _willProceedWithInstallation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)stringsMatch:(id)arg0 second:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif