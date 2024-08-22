// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24PERSONALINTELLIGENCECORE13METRICMESSAGE_H
#define _TTC24PERSONALINTELLIGENCECORE13METRICMESSAGE_H

@class NSString;
@protocol BMStoreData;

#import <Foundation/Foundation.h>


@interface _TtC24PersonalIntelligenceCore13MetricMessage : NSObject <BMStoreData>

 {
    ? backend;
    ? messageIdentifier;
    ? messageContents;
    ? $__lazy_storage_$_codableArray;
}


@property (nonatomic, readonly) unsigned int dataVersion; // ivar: dataVersion
@property (nonatomic, readonly) NSString *description;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)init;
-(id)json;
-(id)serialize;


@end


#endif