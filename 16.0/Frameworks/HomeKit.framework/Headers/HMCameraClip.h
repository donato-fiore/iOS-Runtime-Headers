// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERACLIP_H
#define HMCAMERACLIP_H

@class NSArray, NSDate, NSString, NSData, NSSet, NSUUID, NSDictionary;
@protocol HMFObject, NSCopying, NSSecureCoding, HMCameraRecordingEvent;

#import <Foundation/Foundation.h>

#import "HMCameraClipEncryptionContext.h"

@interface HMCameraClip : NSObject <HMFObject, NSCopying, NSSecureCoding, HMCameraRecordingEvent>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) BOOL canAskForUserFeedback;
@property (readonly, getter=isComplete) BOOL complete; // ivar: _complete
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isDonated) BOOL donated; // ivar: _donated
@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly, copy) HMCameraClipEncryptionContext *encryptionContext; // ivar: _encryptionContext
@property (readonly, copy) NSData *encryptionKey;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSInteger quality; // ivar: _quality
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSSet *significantEvents; // ivar: _significantEvents
@property (readonly, copy) NSDate *startDate; // ivar: _startDate
@property (readonly, copy) NSString *streamingAssetVersion; // ivar: _streamingAssetVersion
@property (readonly) Class superclass;
@property (readonly) CGFloat targetFragmentDuration; // ivar: _targetFragmentDuration
@property (readonly, copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, copy) NSDictionary *videoAssetRequiredHTTPHeaders;
@property (readonly, copy) NSArray *videoDataSegments;
@property (readonly, copy) NSArray *videoSegments; // ivar: _videoSegments


+(BOOL)supportsSecureCoding;
+(id)requiredHTTPHeadersForStreamingAssetVersion:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 startDate:(id)arg1 duration:(CGFloat)arg2 targetFragmentDuration:(CGFloat)arg3 isComplete:(BOOL)arg4 isDonated:(BOOL)arg5 quality:(NSInteger)arg6 streamingAssetVersion:(id)arg7 encryptionContext:(id)arg8 videoSegments:(id)arg9 significantEvents:(id)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif