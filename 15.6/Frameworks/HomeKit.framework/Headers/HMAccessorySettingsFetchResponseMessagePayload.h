// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYSETTINGSFETCHRESPONSEMESSAGEPAYLOAD_H
#define HMACCESSORYSETTINGSFETCHRESPONSEMESSAGEPAYLOAD_H

@class NSArray, NSString;
@protocol HMFLogging, HMFObject, HMMessageEncoding;

#import <Foundation/Foundation.h>

#import "HMAccessorySettingsPartialFetchFailureInformation.h"

@interface HMAccessorySettingsFetchResponseMessagePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMAccessorySettingsPartialFetchFailureInformation *failureInformation; // ivar: _failureInformation
@property (readonly) NSArray *fetchResults;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSArray *settings; // ivar: _settings
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithSettings:(id)arg0 failureInformation:(id)arg1 ;
-(id)payloadCopy;


@end


#endif