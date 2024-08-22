// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCCONTEXT_H
#define HDCLOUDSYNCCONTEXT_H

@class NSUUID, NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HDPeriodicActivity.h"

@interface HDCloudSyncContext : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) HDPeriodicActivity *periodicActivity; // ivar: _periodicActivity
@property (readonly, nonatomic) NSInteger purpose; // ivar: _purpose
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, copy, nonatomic) NSString *shortIdentifier; // ivar: _shortIdentifier
@property (copy, nonatomic) NSDate *unitTest_syncDateOverride; // ivar: _unitTest_syncDateOverride


-(BOOL)isEquivalent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initForPurpose:(NSInteger)arg0 options:(NSUInteger)arg1 reason:(NSInteger)arg2 periodicActivity:(id)arg3 ;
-(id)subContextByAddingOptions:(NSUInteger)arg0 ;
-(id)subContextByRemovingOptions:(NSUInteger)arg0 ;


@end


#endif