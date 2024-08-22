// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENEXPOSUREDETECTIONHISTORYSESSION_H
#define ENEXPOSUREDETECTIONHISTORYSESSION_H

@class NSUUID, NSString, NSDate;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>

#import "ENRegion.h"

@interface ENExposureDetectionHistorySession : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *exposureClassificationIdentifier; // ivar: _exposureClassificationIdentifier
@property (nonatomic) NSUInteger fileCount; // ivar: _fileCount
@property (nonatomic) NSUInteger matchCount; // ivar: _matchCount
@property (copy, nonatomic) ENRegion *region; // ivar: _region
@property (copy, nonatomic) NSString *systemBuildVersion; // ivar: _systemBuildVersion


-(id)description;
-(id)init;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif