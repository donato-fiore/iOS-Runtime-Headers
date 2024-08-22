// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSSYSDIAGNOSEINTERFACE_H
#define SBSSYSDIAGNOSEINTERFACE_H

@class NSXPCConnection;
@protocol SBSSysdiagnoseImplementer;

#import <Foundation/Foundation.h>


@interface SBSSysdiagnoseInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSSysdiagnoseImplementer> *_sbProxy;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)dealloc;
-(void)sysdiagnoseHasStarted:(BOOL)arg0 ;


@end


#endif