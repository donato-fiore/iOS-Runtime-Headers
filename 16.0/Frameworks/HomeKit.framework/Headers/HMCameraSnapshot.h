// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERASNAPSHOT_H
#define HMCAMERASNAPSHOT_H

@class NSArray, NSDate, NSString;
@protocol HMFObject;


#import "HMCameraSource.h"

@interface HMCameraSnapshot : HMCameraSource <HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy, nonatomic) NSDate *captureDate; // ivar: _captureDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didFillSlot; // ivar: _didFillSlot
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithProfileUniqueIdentifier:(id)arg0 slotIdentifier:(id)arg1 aspectRatio:(id)arg2 captureDate:(id)arg3 ;
-(void)_releaseSlotIdentifier;
-(void)dealloc;
-(void)fillSlotWithCompletionHandler:(id)arg0 ;


@end


#endif