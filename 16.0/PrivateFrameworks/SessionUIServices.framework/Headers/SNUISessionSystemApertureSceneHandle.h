// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUISESSIONSYSTEMAPERTURESCENEHANDLE_H
#define SNUISESSIONSYSTEMAPERTURESCENEHANDLE_H

@class NSString;
@protocol BSInvalidatable;


#import "SNUISessionSceneHandle.h"
#import "_TtC17SessionUIServices32SessionSystemApertureSceneHandle.h"

@interface SNUISessionSystemApertureSceneHandle : SNUISessionSceneHandle <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _TtC17SessionUIServices32SessionSystemApertureSceneHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSessionSceneHandle:(id)arg0 ;
-(void)invalidate;


@end


#endif