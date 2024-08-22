// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSSYSTEMINTERFACE_H
#define SBSSYSTEMINTERFACE_H

@class NSXPCConnection;
@protocol SBSSystemImplementer;

#import <Foundation/Foundation.h>


@interface SBSSystemInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSSystemImplementer> *_sbProxy;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)dealloc;
-(void)identifyWithOptions:(id)arg0 ;
-(void)intercomWithOptions:(id)arg0 ;
-(void)obliterate:(id)arg0 ;
-(void)reboot:(id)arg0 ;
-(void)requestDeferredReboot;
-(void)setTurnOffBrightnessFactor:(BOOL)arg0 ;


@end


#endif