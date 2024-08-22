// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDEVICEASSETREQUESTCONFIGURATION_H
#define SFDEVICEASSETREQUESTCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface SFDeviceAssetRequestConfiguration : NSObject

@property (copy, nonatomic) id *downloadCompletionHandler; // ivar: _downloadCompletionHandler
@property (readonly, copy, nonatomic) id *queryResultHandler; // ivar: _queryResultHandler
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)description;
-(id)initWithQueryResultHandler:(id)arg0 ;


@end


#endif