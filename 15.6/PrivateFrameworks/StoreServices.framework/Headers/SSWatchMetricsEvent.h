// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSWATCHMETRICSEVENT_H
#define SSWATCHMETRICSEVENT_H

@class NSNumber, NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSWatchMetricsEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *adamId; // ivar: _adamId
@property (copy, nonatomic) NSString *appExtensionVersion; // ivar: _appExtensionVersion
@property (copy, nonatomic) NSNumber *appExternalVersionID; // ivar: _appExternalVersionID
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *cohortID; // ivar: _cohortID
@property (copy, nonatomic) NSString *downloadVarietyID; // ivar: _downloadVarietyID
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (nonatomic) NSUInteger installType; // ivar: _installType
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (copy, nonatomic) NSNumber *pid; // ivar: _pid
@property (copy, nonatomic) NSNumber *purchaserDsid; // ivar: _purchaserDsid
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSNumber *userDsid; // ivar: _userDsid
@property (copy, nonatomic) NSString *versionString; // ivar: _versionString
@property (copy, nonatomic) NSString *watchGuid; // ivar: _watchGuid
@property (copy, nonatomic) NSString *watchSerial; // ivar: _watchSerial
@property (copy, nonatomic) NSString *watchSize; // ivar: _watchSize


-(id)_appCohortID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)financeDictionaryRepresentation;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif