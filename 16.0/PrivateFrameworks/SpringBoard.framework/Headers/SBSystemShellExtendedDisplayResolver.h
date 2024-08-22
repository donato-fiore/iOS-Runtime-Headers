// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMSHELLEXTENDEDDISPLAYRESOLVER_H
#define SBSYSTEMSHELLEXTENDEDDISPLAYRESOLVER_H

@class FBSDisplayIdentity, NSString;
@protocol SBWindowingModeResolver, SBDisplayWindowingModeResolverDelegate;

#import <Foundation/Foundation.h>


@interface SBSystemShellExtendedDisplayResolver : NSObject <SBWindowingModeResolver>

 {
    FBSDisplayIdentity *_rootDisplayIdentity;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBDisplayWindowingModeResolverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayWindowingMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isWindowingModeAvailable;
@property (readonly, nonatomic) FBSDisplayIdentity *rootDisplayIdentity;
@property (readonly) Class superclass;


-(id)initWithRootDisplay:(id)arg0 ;


@end


#endif