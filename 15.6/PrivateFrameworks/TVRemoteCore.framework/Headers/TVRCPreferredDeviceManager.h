// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRCPREFERREDDEVICEMANAGER_H
#define TVRCPREFERREDDEVICEMANAGER_H


#import <Foundation/Foundation.h>


@interface TVRCPreferredDeviceManager : NSObject



+(id)sharedInstance;
-(CGFloat)preferredDeviceSearchTimeout;
-(id)preferredDeviceIdentifier;
-(void)setPreferredDevice:(id)arg0 ;


@end


#endif