// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENEXPOSUREDETECTIONHISTORYFILE_H
#define ENEXPOSUREDETECTIONHISTORYFILE_H

@class NSData, NSNumber, NSDictionary, NSDate, NSString;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>

#import "ENRegion.h"

@interface ENExposureDetectionHistoryFile : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSData *fileHash; // ivar: _fileHash
@property (copy, nonatomic) NSNumber *keyCount; // ivar: _keyCount
@property (copy, nonatomic) NSNumber *matchCount; // ivar: _matchCount
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSDate *processDate; // ivar: _processDate
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier; // ivar: _sourceAppBundleIdentifier
@property (copy, nonatomic) ENRegion *sourceRegion; // ivar: _sourceRegion


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif