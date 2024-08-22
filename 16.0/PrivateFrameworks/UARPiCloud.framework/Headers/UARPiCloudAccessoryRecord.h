// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPICLOUDACCESSORYRECORD_H
#define UARPICLOUDACCESSORYRECORD_H

@class CKRecord, NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPiCloudAccessoryRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly) CKRecord *ckRecord; // ivar: _ckRecord
@property (readonly) NSArray *deploymentList; // ivar: _deploymentList
@property (readonly) NSString *deploymentStr; // ivar: _deploymentStr
@property (readonly) NSString *firmwareBinaryHash; // ivar: _firmwareBinaryHash
@property (readonly) NSString *firmwareFileSize; // ivar: _firmwareFileSize
@property (readonly) NSString *firmwareURL; // ivar: _firmwareURL
@property (readonly) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) NSString *manufacturer; // ivar: _manufacturer
@property (readonly) NSString *model; // ivar: _model
@property (readonly) NSString *recordName; // ivar: _recordName
@property (readonly) NSString *recordStatus; // ivar: _recordStatus
@property (readonly) NSString *releaseDate; // ivar: _releaseDate
@property (readonly) NSString *releaseNotesFileSize; // ivar: _releaseNotesFileSize
@property (readonly) NSString *releaseNotesHash; // ivar: _releaseNotesHash
@property (readonly) NSString *releaseNotesURL; // ivar: _releaseNotesURL
@property (readonly) NSString *releaseType; // ivar: _releaseType
@property (readonly) NSString *signature; // ivar: _signature
@property (readonly) NSString *updateClassification; // ivar: _updateClassification


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCKRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dumpWithTabDepth:(NSUInteger)arg0 dumpString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif