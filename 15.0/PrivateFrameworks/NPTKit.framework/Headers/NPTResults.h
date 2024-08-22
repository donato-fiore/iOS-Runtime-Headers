// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPTRESULTS_H
#define NPTRESULTS_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NPTMetricResult.h"
#import "NPTPingResult.h"

@interface NPTResults : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (retain, nonatomic) NPTMetricResult *downloadResults; // ivar: _downloadResults
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSDictionary *networkQualityResults; // ivar: _networkQualityResults
@property (retain, nonatomic) NPTPingResult *pingResults; // ivar: _pingResults
@property (retain, nonatomic) NPTMetricResult *uploadResults; // ivar: _uploadResults


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif