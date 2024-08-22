// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VN1JC7R3K4455FKQZ0DY1VHQ_H
#define VN1JC7R3K4455FKQZ0DY1VHQ_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VN1JC7R3k4455fKQz0dY1VhQ : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_applicableDetectorAndOptions:(*id)arg0 loadedInSession:(id)arg1 error:(*id)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)supportedImageSizeSet;


@end


#endif