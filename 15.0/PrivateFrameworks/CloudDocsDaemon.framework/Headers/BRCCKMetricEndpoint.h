// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCCKMETRICENDPOINT_H
#define BRCCKMETRICENDPOINT_H



#import "BRCMetricEndpoint.h"
#import "BRCAccountSession.h"

@interface BRCCKMetricEndpoint : BRCMetricEndpoint {
    BRCAccountSession *_session;
}




-(id)initWithSession:(id)arg0 ;
-(void)submitEventMetric:(id)arg0 ;


@end


#endif