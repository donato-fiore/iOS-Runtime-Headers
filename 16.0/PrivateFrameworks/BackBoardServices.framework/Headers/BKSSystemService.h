// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSSYSTEMSERVICE_H
#define BKSSYSTEMSERVICE_H

@class FBSSystemService;

#import <Foundation/Foundation.h>


@interface BKSSystemService : NSObject {
    FBSSystemService *_fbsSystemService;
}




-(BOOL)canOpenApplication:(id)arg0 reason:(*int)arg1 ;
-(id)init;
-(id)systemApplicationBundleIdentifier;
-(int)pidForApplication:(id)arg0 ;
-(unsigned int)createClientPort;
-(void)cleanupClientPort:(unsigned int)arg0 ;
-(void)openApplication:(id)arg0 options:(id)arg1 clientPort:(unsigned int)arg2 withResult:(id)arg3 ;
-(void)openApplication:(id)arg0 options:(id)arg1 withResult:(id)arg2 ;
-(void)openURL:(id)arg0 application:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id)arg4 ;
-(void)terminateApplication:(id)arg0 forReason:(int)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 ;


@end


#endif