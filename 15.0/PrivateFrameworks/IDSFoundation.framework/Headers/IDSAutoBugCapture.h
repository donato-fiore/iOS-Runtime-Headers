// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSAUTOBUGCAPTURE_H
#define IDSAUTOBUGCAPTURE_H


#import <Foundation/Foundation.h>


@interface IDSAutoBugCapture : NSObject



+(BOOL)isSupported;
+(void)triggerCaptureWithEvent:(NSInteger)arg0 context:(id)arg1 completion:(id)arg2 ;
+(void)triggerCaptureWithEvent:(NSInteger)arg0 destinations:(id)arg1 context:(id)arg2 completion:(id)arg3 ;


@end


#endif