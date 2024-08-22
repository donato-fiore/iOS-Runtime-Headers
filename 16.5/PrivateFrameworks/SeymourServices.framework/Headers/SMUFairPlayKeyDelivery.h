// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMUFAIRPLAYKEYDELIVERY_H
#define SMUFAIRPLAYKEYDELIVERY_H

@protocol SMUFairPlayKeyDelivering;

#import <Foundation/Foundation.h>


@interface SMUFairPlayKeyDelivery : NSObject <SMUFairPlayKeyDelivering>





-(id)remoteServerPlaybackContextForCertificate:(id)arg0 error:(*id)arg1 ;
-(id)serverPlaybackContextForPlaybackContext:(id)arg0 remoteContextIdentifier:(unsigned int)arg1 error:(*id)arg2 ;


@end


#endif