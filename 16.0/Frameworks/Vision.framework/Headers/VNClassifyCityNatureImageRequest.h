// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCLASSIFYCITYNATUREIMAGEREQUEST_H
#define VNCLASSIFYCITYNATUREIMAGEREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNClassifyCityNatureImageRequest : VNImageBasedRequest

@property NSUInteger imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;


@end


#endif