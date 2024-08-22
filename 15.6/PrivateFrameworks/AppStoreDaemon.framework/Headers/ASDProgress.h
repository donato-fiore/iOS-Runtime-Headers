// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDPROGRESS_H
#define ASDPROGRESS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDProgress : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSString *bundleID; // ivar: _bundleID
@property NSInteger completedUnitCount; // ivar: _completedUnitCount
@property NSInteger downloadCompletedUnitCount; // ivar: _downloadCompletedUnitCount
@property NSInteger downloadTotalUnitCount; // ivar: _downloadTotalUnitCount
@property NSInteger installCompletedUnitCount; // ivar: _installCompletedUnitCount
@property NSInteger installTotalUnitCount; // ivar: _installTotalUnitCount
@property NSInteger phase; // ivar: _phase
@property BOOL reportRemotely; // ivar: _reportRemotely
@property CGFloat throughput; // ivar: _throughput
@property NSInteger totalUnitCount; // ivar: _totalUnitCount


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif