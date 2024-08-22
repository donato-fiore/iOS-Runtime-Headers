// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONSCENEVIEWSTATUSBARDESCRIPTOR_H
#define SBAPPLICATIONSCENEVIEWSTATUSBARDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface SBApplicationSceneViewStatusBarDescriptor : NSObject

@property (nonatomic, getter=isForcedHidden) BOOL forceHidden; // ivar: _forceHidden


+(id)statusBarDescriptorWithForceHidden:(BOOL)arg0 ;
-(id)debugDescription;
-(id)initWithForceHidden:(BOOL)arg0 ;


@end


#endif