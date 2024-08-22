// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMSHELLEXTENDEDDISPLAYRESOLVERFACTORY_H
#define SBSYSTEMSHELLEXTENDEDDISPLAYRESOLVERFACTORY_H

@class NSString;
@protocol SBWindowingModeResolverFactory;

#import <Foundation/Foundation.h>


@interface SBSystemShellExtendedDisplayResolverFactory : NSObject <SBWindowingModeResolverFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayWindowingMode;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)resolverForPhysicalDisplay:(id)arg0 caDisplay:(id)arg1 ;


@end


#endif