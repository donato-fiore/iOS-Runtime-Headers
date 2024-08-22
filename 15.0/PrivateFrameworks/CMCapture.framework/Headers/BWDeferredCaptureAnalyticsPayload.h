// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEFERREDCAPTUREANALYTICSPAYLOAD_H
#define BWDEFERREDCAPTUREANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWDeferredCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) unsigned int commitDurationInMilliseconds; // ivar: _commitDurationInMilliseconds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int error; // ivar: _error
@property (nonatomic) BOOL fileBacked; // ivar: _fileBacked
@property (nonatomic) unsigned int flushDurationInMilliseconds; // ivar: _flushDurationInMilliseconds
@property (readonly) NSUInteger hash;
@property (nonatomic) int processingType; // ivar: _processingType
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif