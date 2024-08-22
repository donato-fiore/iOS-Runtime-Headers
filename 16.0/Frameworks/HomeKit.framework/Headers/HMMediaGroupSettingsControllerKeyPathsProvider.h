// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAGROUPSETTINGSCONTROLLERKEYPATHSPROVIDER_H
#define HMMEDIAGROUPSETTINGSCONTROLLERKEYPATHSPROVIDER_H

@class NSString;
@protocol HMMediaGroupSettingsKeyPathsProviding;

#import <Foundation/Foundation.h>


@interface HMMediaGroupSettingsControllerKeyPathsProvider : NSObject <HMMediaGroupSettingsKeyPathsProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allKeyPaths;


@end


#endif