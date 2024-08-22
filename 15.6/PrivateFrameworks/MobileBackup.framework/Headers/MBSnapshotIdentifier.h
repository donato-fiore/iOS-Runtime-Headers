// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBSNAPSHOTIDENTIFIER_H
#define MBSNAPSHOTIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBSnapshotIdentifier : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *backupUDID; // ivar: _backupUDID
@property (readonly, nonatomic) NSString *backupUUID; // ivar: _backupUUID
@property (nonatomic) NSUInteger snapshotID; // ivar: _snapshotID
@property (readonly, nonatomic) NSString *snapshotUUID; // ivar: _snapshotUUID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 ;
-(id)initWithBackupUUID:(id)arg0 snapshotUUID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif