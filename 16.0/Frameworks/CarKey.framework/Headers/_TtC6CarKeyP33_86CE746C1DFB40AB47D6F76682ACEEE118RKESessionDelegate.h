// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6CARKEYP33_86CE746C1DFB40AB47D6F76682ACEEE118RKESESSIONDELEGATE_H
#define _TTC6CARKEYP33_86CE746C1DFB40AB47D6F76682ACEEE118RKESESSIONDELEGATE_H

@protocol SESRKESessionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC6CarKeyP33_86CE746C1DFB40AB47D6F76682ACEEE118RKESessionDelegate : NSObject <SESRKESessionDelegate>

 {
    ? parent;
}




-(id)init;
-(void)sesSession:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)sesSession:(id)arg0 didReceivePassthroughMessage:(id)arg1 fromVehicle:(id)arg2 ;
-(void)sesSession:(id)arg0 event:(id)arg1 fromVehicle:(id)arg2 ;


@end


#endif