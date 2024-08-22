// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CIDVRGBFRAMEQUALITYMONITORADAPTER_H
#define _CIDVRGBFRAMEQUALITYMONITORADAPTER_H

@class NSString;
@protocol PADFrameQualityMonitor, CIDVRGBCaptureImageQualityDelegate;

#import <Foundation/Foundation.h>


@interface _CIDVRGBFrameQualityMonitorAdapter : NSObject <PADFrameQualityMonitor>

 {
    id<CIDVRGBCaptureImageQualityDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCaptureDelegate:(id)arg0 ;
-(void)verifyQualityForFrame:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif