// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNRECOGNIZESPORTBALLSREQUEST_H
#define VNRECOGNIZESPORTBALLSREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNRecognizeSportBallsRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;


@end


#endif