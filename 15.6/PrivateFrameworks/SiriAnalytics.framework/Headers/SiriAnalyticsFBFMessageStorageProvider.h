// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSFBFMESSAGESTORAGEPROVIDER_H
#define SIRIANALYTICSFBFMESSAGESTORAGEPROVIDER_H

@class NSString;
@protocol SiriAnalyticsMessageStorage;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsFBFMessageStorageProvider : NSObject <SiriAnalyticsMessageStorage>

 {
    NSString *_applicationIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithApplicationIdentifier:(id)arg0 ;
-(void)storeMessages:(id)arg0 ;


@end


#endif