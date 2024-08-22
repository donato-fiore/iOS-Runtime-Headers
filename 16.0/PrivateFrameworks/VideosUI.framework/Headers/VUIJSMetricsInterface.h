// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIJSMETRICSINTERFACE_H
#define VUIJSMETRICSINTERFACE_H

@protocol VUIJSMetricsInterface;


#import "VUIJSObject.h"

@interface VUIJSMetricsInterface : VUIJSObject <VUIJSMetricsInterface>





-(id)initWithAppContext:(id)arg0 ;
-(void)recordLogEvent:(id)arg0 ;


@end


#endif