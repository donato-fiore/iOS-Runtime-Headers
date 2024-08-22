// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCANNEDDEMOINTERFACE_H
#define SBSCANNEDDEMOINTERFACE_H

@class NSXPCConnection;
@protocol SBSCannedDemoServiceImplementer;

#import <Foundation/Foundation.h>


@interface SBSCannedDemoInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSCannedDemoServiceImplementer> *_sbProxy;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)siriUtteranceFileToBePlayed:(id)arg0 duckMusic:(BOOL)arg1 reply:(id)arg2 ;


@end


#endif