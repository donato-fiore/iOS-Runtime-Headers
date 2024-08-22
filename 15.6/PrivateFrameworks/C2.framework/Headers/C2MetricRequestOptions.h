// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2METRICREQUESTOPTIONS_H
#define C2METRICREQUESTOPTIONS_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "C2MetricOptions.h"

@interface C2MetricRequestOptions : NSObject

@property (nonatomic) unsigned char _allowsExpensiveAccess; // ivar: __allowsExpensiveAccess
@property (nonatomic) unsigned char _allowsPowerNapScheduling; // ivar: __allowsPowerNapScheduling
@property (retain, nonatomic) NSString *_sourceApplicationBundleIdentifier; // ivar: __sourceApplicationBundleIdentifier
@property (retain, nonatomic) NSString *_sourceApplicationSecondaryIdentifier; // ivar: __sourceApplicationSecondaryIdentifier
@property (nonatomic) unsigned char allowsCellularAccess; // ivar: _allowsCellularAccess
@property (retain, nonatomic) C2MetricOptions *metricOptions; // ivar: _metricOptions
@property (retain, nonatomic) NSUUID *metricUUID; // ivar: _metricUUID


-(id)init;
-(id)initWithRequestOptions:(id)arg0 ;
-(id)metricRequestTransportOptions;


@end


#endif