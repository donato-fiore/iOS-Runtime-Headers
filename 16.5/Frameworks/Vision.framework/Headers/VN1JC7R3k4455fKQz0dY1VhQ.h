// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VN1JC7R3K4455FKQZ0DY1VHQ_H
#define VN1JC7R3K4455FKQZ0DY1VHQ_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VN1JC7R3k4455fKQz0dY1VhQ : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)supportedAdjustmentKeysAndReturnError:(*id)arg0 ;


@end


#endif