// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADRESPONSEDATA_H
#define ADRESPONSEDATA_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "ADInstallAttributionData.h"

@interface ADResponseData : NSObject

@property (readonly, copy, nonatomic) NSString *algoID; // ivar: _algoID
@property (readonly, copy, nonatomic) NSString *clientRequestID; // ivar: _clientRequestID
@property (readonly, copy, nonatomic) NSDictionary *format; // ivar: _format
@property (readonly, copy, nonatomic) NSString *impressionID; // ivar: _impressionID
@property (readonly, copy, nonatomic) ADInstallAttributionData *installAttribution; // ivar: _installAttribution
@property (readonly, copy, nonatomic) NSString *lineItem; // ivar: _lineItem
@property (readonly, copy, nonatomic) NSString *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *privacy; // ivar: _privacy
@property (readonly, copy, nonatomic) NSString *templateType; // ivar: _templateType


-(id)initWithDict:(id)arg0 ;


@end


#endif