// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL20JSSTOREMETRICSOBJECT_H
#define _TTC19APPSTOREKITINTERNAL20JSSTOREMETRICSOBJECT_H

@protocol _TtP19AppStoreKitInternalP33_92ABCD57C76D54F61A764ECF7FDCA5B527JSStoreMetricsObjectExports_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal20JSStoreMetricsObject : NSObject <_TtP19AppStoreKitInternalP33_92ABCD57C76D54F61A764ECF7FDCA5B527JSStoreMetricsObjectExports_>

 {
    ? metricsRecorder;
}




-(id)flushUnrecordedEvents;
-(id)init;
-(id)recordEvent:(id)arg0 ;


@end


#endif