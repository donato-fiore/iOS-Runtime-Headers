// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSBIOMEMESSAGESTORAGEPROVIDER_H
#define SIRIANALYTICSBIOMEMESSAGESTORAGEPROVIDER_H

@class BMSiriPrivateLearningSELFEventStream, BMSource, NSString;
@protocol SiriAnalyticsMessageStorage;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsBiomeMessageStorageProvider : NSObject <SiriAnalyticsMessageStorage>

 {
    BMSiriPrivateLearningSELFEventStream *_stream;
    BMSource *_source;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isMessageAllowed:(id)arg0 ;
-(id)init;
-(void)storeMessages:(id)arg0 ;


@end


#endif