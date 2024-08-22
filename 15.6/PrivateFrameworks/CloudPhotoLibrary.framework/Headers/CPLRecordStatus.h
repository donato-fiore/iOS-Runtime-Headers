// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLRECORDSTATUS_H
#define CPLRECORDSTATUS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPLRecordChange.h"

@interface CPLRecordStatus : NSObject <NSSecureCoding>

 {
    ? _status;
}


@property (nonatomic, getter=isConfirmed) BOOL confirmed;
@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation
@property (nonatomic, getter=isQuarantined) BOOL quarantined;
@property (readonly, nonatomic) CPLRecordChange *record; // ivar: _record
@property (nonatomic, getter=isResetting) BOOL resetting;
@property (readonly, nonatomic) NSString *statusDescription;
@property (nonatomic, getter=isUnknown) BOOL unknown;
@property (nonatomic, getter=isUpdating) BOOL updating;
@property (nonatomic, getter=isUploaded) BOOL uploaded;
@property (nonatomic, getter=isUploading) BOOL uploading;
@property (nonatomic, getter=isWaitingForUpdate) BOOL waitingForUpdate;
@property (nonatomic, getter=isWaitingForUpload) BOOL waitingForUpload;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 generation:(NSUInteger)arg1 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif