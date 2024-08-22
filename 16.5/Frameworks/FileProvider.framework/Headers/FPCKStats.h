// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPCKSTATS_H
#define FPCKSTATS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FPCKStats : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger numberOfBrokenFilesInBackupManifestCheck; // ivar: _numberOfBrokenFilesInBackupManifestCheck
@property (nonatomic) NSInteger numberOfBrokenFilesInFSAndFSSnapshotCheck; // ivar: _numberOfBrokenFilesInFSAndFSSnapshotCheck
@property (nonatomic) NSInteger numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck; // ivar: _numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck
@property (nonatomic) NSInteger numberOfBrokenFilesInReconciliationTableCheck; // ivar: _numberOfBrokenFilesInReconciliationTableCheck
@property (nonatomic) NSInteger numberOfFilesChecked; // ivar: _numberOfFilesChecked


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif