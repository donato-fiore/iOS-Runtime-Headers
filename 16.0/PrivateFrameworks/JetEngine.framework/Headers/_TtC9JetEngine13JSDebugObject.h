// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9JETENGINE13JSDEBUGOBJECT_H
#define _TTC9JETENGINE13JSDEBUGOBJECT_H

@protocol _TtP9JetEngineP33_780DF8368F5E851BC2A78B7BD3A1B32C20JSDebugObjectExports_;

#import <Foundation/Foundation.h>


@interface _TtC9JetEngine13JSDebugObject : NSObject <_TtP9JetEngineP33_780DF8368F5E851BC2A78B7BD3A1B32C20JSDebugObjectExports_>

 {
    ? isDebugPointsEnabled;
    ? newPoints;
    ? encoder;
}




-(id)init;
-(id)pollPoints;
-(void)enable;


@end


#endif