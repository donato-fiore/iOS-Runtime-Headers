// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOURLSTATECAPTURE_H
#define _GEOURLSTATECAPTURE_H

@class NSString;
@protocol GEOPListStateCapturing;

#import <Foundation/Foundation.h>


@interface _GEOURLStateCapture : NSObject <GEOPListStateCapturing>

 {
    NSUInteger _stateCaptureHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif