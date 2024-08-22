// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLOCALVIDEOKEYFRAMEVIDEOCHOOSINGOPTIONS_H
#define PLLOCALVIDEOKEYFRAMEVIDEOCHOOSINGOPTIONS_H

@class NSString;
@protocol PLVideoChoosingOptions;

#import <Foundation/Foundation.h>


@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions>

 {
    BOOL _streamingAllowed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasValidTimeRange;
-(BOOL)isExplicitUserAction;
-(BOOL)isMediumHighQualityAllowed;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)isStreamingAllowed;
-(BOOL)restrictToPlayableOnCurrentDevice;
-(NSInteger)videoDeliveryMode;
-(NSInteger)videoVersion;
-(id)initWithStreamingAllowed:(BOOL)arg0 ;


@end


#endif