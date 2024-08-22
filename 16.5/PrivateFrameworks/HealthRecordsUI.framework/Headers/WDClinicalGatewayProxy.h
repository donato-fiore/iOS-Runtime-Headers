// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCLINICALGATEWAYPROXY_H
#define WDCLINICALGATEWAYPROXY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WDClinicalGatewayProxy : NSObject

@property (readonly, copy, nonatomic) NSString *batchID; // ivar: _batchID
@property (readonly, copy, nonatomic) NSString *gatewayID; // ivar: _gatewayID


-(id)init;
-(id)initWithGatewayID:(id)arg0 batchID:(id)arg1 ;


@end


#endif