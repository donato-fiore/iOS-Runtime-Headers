// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18ACTIVITYUISERVICES33ACTIVITYSYSTEMAPERTURESCENEHANDLE_H
#define _TTC18ACTIVITYUISERVICES33ACTIVITYSYSTEMAPERTURESCENEHANDLE_H

@class FBScene;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface _TtC18ActivityUIServices33ActivitySystemApertureSceneHandle : NSObject <BSInvalidatable>

 {
    ? invalidated;
    ? activityDescriptor;
    ? processIdentity;
    ? logIdentifier;
}


@property (nonatomic, retain) FBScene *scene; // ivar: scene


-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif