// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIFEEDBACKCLIPMETADATA_H
#define HMIFEEDBACKCLIPMETADATA_H

@class HMFObject, NSDictionary;



@interface HMIFeedbackClipMetadata : HMFObject

@property (readonly) NSDictionary *cameraMetadata; // ivar: _cameraMetadata
@property (readonly) NSDictionary *clipMetadata; // ivar: _clipMetadata
@property (readonly) NSDictionary *homeMetadata; // ivar: _homeMetadata


-(id)initWithClipMetadata:(id)arg0 cameraMetadata:(id)arg1 homeMetadata:(id)arg2 ;


@end


#endif