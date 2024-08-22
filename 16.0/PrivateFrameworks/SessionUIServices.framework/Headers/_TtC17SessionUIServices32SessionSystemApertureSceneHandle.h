// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES32SESSIONSYSTEMAPERTURESCENEHANDLE_H
#define _TTC17SESSIONUISERVICES32SESSIONSYSTEMAPERTURESCENEHANDLE_H

@class TtC17SessionUIServices18SessionSceneHandle;
@protocol BSInvalidatable;



@interface _TtC17SessionUIServices32SessionSystemApertureSceneHandle : TtC17SessionUIServices18SessionSceneHandle <BSInvalidatable>

 {
    ? invalidated;
    ? sessionDescriptor;
    ? processIdentity;
    ? logIdentifier;
}




-(void)dealloc;
-(void)invalidate;


@end


#endif