// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCLOUDSTORECONTAINERDIAGNOSTICSNAPSHOT_H
#define PKCLOUDSTORECONTAINERDIAGNOSTICSNAPSHOT_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCloudStoreContainerDiagnosticSnapshot : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *localRecordIDs; // ivar: _localRecordIDs
@property (readonly, nonatomic) NSDictionary *recordIDs; // ivar: _recordIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordIDs:(id)arg0 localRecordIDs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif