// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICURLBAGLIBRARYDAAPCONFIGURATION_H
#define ICURLBAGLIBRARYDAAPCONFIGURATION_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ICURLBagLibraryDAAPConfiguration : NSObject {
    NSDictionary *_bagDictionary;
}


@property (readonly, nonatomic) NSInteger autoUpdatePollingFrequencySeconds;
@property (readonly, nonatomic) NSString *baseURL;
@property (readonly, nonatomic) NSInteger databaseID;
@property (readonly, nonatomic) NSString *databaseName;
@property (readonly, nonatomic) NSUInteger maxSyncRetryIntervalSeconds;
@property (readonly, nonatomic, getter=isOnlineGeniusForMatchEnabled) BOOL onlineGeniusForMatchEnabled;
@property (readonly, nonatomic) NSInteger playDataBatchIntervalInMinutes;
@property (readonly, nonatomic) NSInteger subscribedContainerPollingFrequencySeconds;
@property (readonly, nonatomic) NSInteger updatePollingFrequencySeconds;


-(id)description;
-(id)initWithBagLibraryDAAPDictionary:(id)arg0 ;


@end


#endif