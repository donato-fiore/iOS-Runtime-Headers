// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOANALYTICSHANDLINGINFO_H
#define GEOANALYTICSHANDLINGINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOAnalyticsHandlingInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger dbExpireCount; // ivar: _dbExpireCount
@property (nonatomic) NSInteger logMsgType; // ivar: _logMsgType
@property (nonatomic) NSInteger persistCount; // ivar: _persistCount
@property (nonatomic) NSInteger uploadFailureCount; // ivar: _uploadFailureCount
@property (nonatomic) NSInteger uploadSuccessByteCountOnCellular; // ivar: _uploadSuccessByteCountOnCellular
@property (nonatomic) NSInteger uploadSuccessByteCountOnWifi; // ivar: _uploadSuccessByteCountOnWifi
@property (nonatomic) NSInteger uploadSuccessCountOnCellular; // ivar: _uploadSuccessCountOnCellular
@property (nonatomic) NSInteger uploadSuccessCountOnWifi; // ivar: _uploadSuccessCountOnWifi


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif