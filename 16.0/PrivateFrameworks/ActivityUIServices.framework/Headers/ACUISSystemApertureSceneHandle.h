// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISSYSTEMAPERTURESCENEHANDLE_H
#define ACUISSYSTEMAPERTURESCENEHANDLE_H

@class NSString, FBScene;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices33ActivitySystemApertureSceneHandle.h"

@interface ACUISSystemApertureSceneHandle : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _TtC18ActivityUIServices33ActivitySystemApertureSceneHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly) Class superclass;


-(id)initWithActivitySystemApertureSceneHandle:(id)arg0 ;
-(void)invalidate;


@end


#endif