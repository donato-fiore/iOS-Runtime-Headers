// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSOFTWAREUPDATEV2_H
#define HMSOFTWAREUPDATEV2_H

@class NSArray, NSString, NSError, HMFSoftwareVersion;
@protocol HMFObject, NSCopying;

#import <Foundation/Foundation.h>

#import "HMSoftwareUpdateDocumentationMetadata.h"

@interface HMSoftwareUpdateV2 : NSObject <HMFObject, NSCopying>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // ivar: _documentationMetadata
@property NSUInteger downloadSize; // ivar: _downloadSize
@property (retain) NSError *error; // ivar: _error
@property (readonly) CGFloat estimatedTimeRemaining; // ivar: _estimatedTimeRemaining
@property (readonly) NSUInteger hash;
@property (copy) NSString *humanReadableUpdateName; // ivar: _humanReadableUpdateName
@property (readonly) float percentageComplete; // ivar: _percentageComplete
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property BOOL rampFeatureEnabledOnServer; // ivar: _rampFeatureEnabledOnServer
@property (readonly, copy) NSString *shortDescription;
@property NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (retain) HMFSoftwareVersion *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 error:(id)arg1 documentationMetadata:(id)arg2 version:(id)arg3 downloadSize:(NSUInteger)arg4 humanReadableUpdateName:(id)arg5 rampFeatureEnabledOnServer:(BOOL)arg6 ;


@end


#endif