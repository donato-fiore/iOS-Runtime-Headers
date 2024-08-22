// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLSOURCEDEVICERECORDSUMMARY_H
#define WLSOURCEDEVICERECORDSUMMARY_H

@class NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>

#import "WLSourceDeviceAccount.h"

@interface WLSourceDeviceRecordSummary : NSObject

@property (retain, nonatomic) WLSourceDeviceAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *bucket; // ivar: _bucket
@property (copy, nonatomic) NSString *dataFilePath; // ivar: _dataFilePath
@property (nonatomic) BOOL didDownload; // ivar: _didDownload
@property (nonatomic) NSUInteger downloadSegmentCount; // ivar: _downloadSegmentCount
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger itemSize; // ivar: _itemSize
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSDate *modifiedDate; // ivar: _modifiedDate
@property (copy, nonatomic) NSString *relativePath; // ivar: _relativePath
@property (nonatomic) NSUInteger sqlID; // ivar: _sqlID
@property (nonatomic) BOOL storeDataAsFile; // ivar: _storeDataAsFile


+(id)_numberFormatter;
+(id)summaryWithInfo:(id)arg0 account:(id)arg1 ;
-(id)initWithInfo:(id)arg0 account:(id)arg1 ;


@end


#endif