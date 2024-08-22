// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIDEVICEWIFISTATE_H
#define PSUIDEVICEWIFISTATE_H


#import <Foundation/Foundation.h>


@interface PSUIDeviceWiFiState : NSObject



+(id)sharedInstance;
-(BOOL)isConnectedOverWiFi;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif