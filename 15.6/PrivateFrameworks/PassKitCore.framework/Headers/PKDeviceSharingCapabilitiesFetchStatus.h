// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDEVICESHARINGCAPABILITIESFETCHSTATUS_H
#define PKDEVICESHARINGCAPABILITIESFETCHSTATUS_H

@class NSMutableArray, NSString, NSError, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface PKDeviceSharingCapabilitiesFetchStatus : NSObject {
    NSMutableArray *_fetchedCapabilities;
}


@property (readonly, copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (nonatomic) BOOL deviceCountFetchInProgress; // ivar: _deviceCountFetchInProgress
@property (copy, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (readonly, copy, nonatomic) NSDate *fetchStartDate; // ivar: _fetchStartDate
@property (readonly, copy, nonatomic) NSArray *fetchedCapabilities;
@property (nonatomic) NSInteger maximumPossibleDevices; // ivar: _maximumPossibleDevices


-(BOOL)allPossibleCapabilitiesFetched;
-(BOOL)hasDeviceVersionWithOSVersionRequirementRange:(id)arg0 ;
-(NSInteger)secondsPassedSinceFetchStart;
-(id)description;
-(id)initWithAppleID:(id)arg0 fetchStartDate:(id)arg1 ;
-(void)addDeviceSharingCapabilities:(id)arg0 ;


@end


#endif