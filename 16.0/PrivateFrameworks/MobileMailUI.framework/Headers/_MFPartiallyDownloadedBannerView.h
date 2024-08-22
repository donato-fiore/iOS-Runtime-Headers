// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFPARTIALLYDOWNLOADEDBANNERVIEW_H
#define _MFPARTIALLYDOWNLOADEDBANNERVIEW_H



#import "MFHasMoreContentBannerView.h"

@interface _MFPartiallyDownloadedBannerView : MFHasMoreContentBannerView

@property NSUInteger remainingBytes; // ivar: _remainingBytes


-(id)actionStringIsDownloading:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 remainingBytes:(NSUInteger)arg1 ;


@end


#endif