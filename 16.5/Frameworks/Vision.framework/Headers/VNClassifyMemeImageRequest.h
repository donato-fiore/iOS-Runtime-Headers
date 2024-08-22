// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCLASSIFYMEMEIMAGEREQUEST_H
#define VNCLASSIFYMEMEIMAGEREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNClassifyMemeImageRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;


@end


#endif