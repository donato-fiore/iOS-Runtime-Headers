// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGSESSIONVARIANTFRAGMENTMANAGER_H
#define HMDCAMERARECORDINGSESSIONVARIANTFRAGMENTMANAGER_H

@class HMFObject, NSString, NSMutableArray;
@protocol HMFLogging, HMDCameraRecordingSessionVariantFragmentManagerDelegate;



@interface HMDCameraRecordingSessionVariantFragmentManager : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraRecordingSessionVariantFragmentManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) BOOL expectsVariantFragment;
@property (readonly) NSMutableArray *fullFragmentTimeRanges; // ivar: _fullFragmentTimeRanges
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) Class superclass;
@property (readonly) NSMutableArray *variantFragments; // ivar: _variantFragments


+(id)logCategory;
-(id)initWithLogIdentifier:(id)arg0 ;
-(void)_drainVariantFragmentQueue;
-(void)handleFullFragment:(id)arg0 ;
-(void)handleVariantFragment:(id)arg0 ;


@end


#endif