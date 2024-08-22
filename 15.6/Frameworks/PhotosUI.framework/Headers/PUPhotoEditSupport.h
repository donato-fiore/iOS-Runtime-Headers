// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOEDITSUPPORT_H
#define PUPHOTOEDITSUPPORT_H


#import <Foundation/Foundation.h>


@interface PUPhotoEditSupport : NSObject



+(BOOL)currentDeviceShouldAllowRawDecode;
+(BOOL)photoWasTakenWithoutFlashWithImageProperties:(id)arg0 ;
+(CGFloat)changeValueOfSlider:(id)arg0 reverse:(BOOL)arg1 coarse:(BOOL)arg2 ;
+(id)photoEditStylisticFontForSize:(CGFloat)arg0 ;


@end


#endif