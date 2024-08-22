// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDARKMODECONFIGURATION_H
#define SXDARKMODECONFIGURATION_H

@class NSDictionary, NSString;
@protocol SXDarkModeConfiguration;

#import <Foundation/Foundation.h>


@interface SXDarkModeConfiguration : NSObject <SXDarkModeConfiguration>



@property (readonly, nonatomic, getter=isAutoDarkModeEnabled) BOOL autoDarkModeEnabled; // ivar: _autoDarkModeEnabled
@property (readonly, copy, nonatomic) NSDictionary *colors; // ivar: _colors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger inversionBehavior; // ivar: _inversionBehavior
@property (readonly, nonatomic) CGFloat saturationThreshold; // ivar: _saturationThreshold
@property (readonly) Class superclass;


-(id)initWithAutoDarkModeEnabled:(BOOL)arg0 inversionBehavior:(NSUInteger)arg1 saturationThreshold:(CGFloat)arg2 colors:(id)arg3 ;


@end


#endif