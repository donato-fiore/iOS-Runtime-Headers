// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCCAMERATESTUTILS_H
#define AVCCAMERATESTUTILS_H


#import <Foundation/Foundation.h>


@interface AVCCameraTestUtils : NSObject



+(BOOL)expectedGFTResolutionForDevice:(id)arg0 ratio:(struct CGSize *)arg1 ;
+(BOOL)expectedPreviewResolutionForDevice:(id)arg0 width:(*int)arg1 height:(*int)arg2 ;
+(BOOL)findExpectedFramerate:(*float)arg0 forDevice:(id)arg1 ;


@end


#endif