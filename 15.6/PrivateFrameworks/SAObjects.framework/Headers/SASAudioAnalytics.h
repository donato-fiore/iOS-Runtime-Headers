// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASAUDIOANALYTICS_H
#define SASAUDIOANALYTICS_H

@class NSDictionary, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASAudioAnalytics : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSDictionary *acousticFeatures;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *speechRecognitionFeatures;
@property (readonly) Class superclass;


+(id)audioAnalytics;
+(id)audioAnalyticsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif