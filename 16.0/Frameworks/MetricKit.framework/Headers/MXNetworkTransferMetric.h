// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXNETWORKTRANSFERMETRIC_H
#define MXNETWORKTRANSFERMETRIC_H

@class NSMeasurement;


#import "MXMetric.h"

@interface MXNetworkTransferMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeCellularDownload; // ivar: _cumulativeCellularDownload
@property (readonly) NSMeasurement *cumulativeCellularUpload; // ivar: _cumulativeCellularUpload
@property (readonly) NSMeasurement *cumulativeWifiDownload; // ivar: _cumulativeWifiDownload
@property (readonly) NSMeasurement *cumulativeWifiUpload; // ivar: _cumulativeWifiUpload


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCumulativeWifiUploadMeasurement:(id)arg0 cumulativeWifiDownloadMeasurement:(id)arg1 cumulativeCellularUploadMeasurement:(id)arg2 cumulativeCellularDownloadMeasurement:(id)arg3 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif