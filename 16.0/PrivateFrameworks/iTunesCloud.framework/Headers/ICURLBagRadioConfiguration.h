// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICURLBAGRADIOCONFIGURATION_H
#define ICURLBAGRADIOCONFIGURATION_H

@class NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface ICURLBagRadioConfiguration : NSObject {
    NSDictionary *_bagRadioDictionary;
}


@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic, getter=isContinueListeningAvailable) BOOL continueListeningAvailable;
@property (readonly, nonatomic) NSInteger continueListeningLoadStationThreshold;
@property (readonly, nonatomic) NSInteger continueListeningMaxQueueSizeInRequest;
@property (readonly, nonatomic) NSInteger continueListeningMaxUpcomingTracksSizeToMaintain;
@property (readonly, nonatomic) NSInteger getTracksDPInfoKBSyncCount;
@property (readonly, nonatomic) NSInteger maxSupportedProtocolVersion;


-(BOOL)shouldIncludeHTTPHeaderField:(id)arg0 forRequestURL:(id)arg1 ;
-(id)initWithBagRadioDictionary:(id)arg0 ;
-(id)urlForBagRadioKey:(id)arg0 ;


@end


#endif