// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERSNAPSHOT_H
#define PRSPOSTERSNAPSHOT_H

@class NSString, IOSurface;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "PRSServerPosterPath.h"

@interface PRSPosterSnapshot : NSObject <BSXPCSecureCoding>



@property (readonly, nonatomic) NSInteger configurationType; // ivar: _configurationType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PRSServerPosterPath *homeScreenConfigurationPath; // ivar: _homeScreenConfigurationPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) IOSurface *surface; // ivar: _surface
@property (readonly, nonatomic) PRSServerPosterPath *switcherConfigurationPath; // ivar: _switcherConfigurationPath
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithIOSurface:(id)arg0 ;
-(id)initWithIOSurface:(id)arg0 switcherConfigurationPath:(id)arg1 homeScreenConfigurationPath:(id)arg2 variant:(NSInteger)arg3 configurationType:(NSInteger)arg4 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif