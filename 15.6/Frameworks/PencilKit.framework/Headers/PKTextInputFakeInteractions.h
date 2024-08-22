// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTFAKEINTERACTIONS_H
#define PKTEXTINPUTFAKEINTERACTIONS_H


#import <Foundation/Foundation.h>


@interface PKTextInputFakeInteractions : NSObject



+(id)sharedInstance;
+(void)attachFakeInteractionToViewIfNecessary:(id)arg0 ;
-(void)_attachToView:(id)arg0 ;


@end


#endif