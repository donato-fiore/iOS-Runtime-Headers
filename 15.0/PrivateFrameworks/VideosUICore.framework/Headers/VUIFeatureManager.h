// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIFEATUREMANAGER_H
#define VUIFEATUREMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VUIFeatureManager : NSObject

@property (retain, nonatomic) NSDictionary *features; // ivar: _features


+(id)sharedInstance;
-(BOOL)isFeatureEnabled:(id)arg0 ;
-(id)_allFeatures;
-(id)availableFeatures;
-(id)init;
-(id)osFeatureFlagsJSON;
-(void)setFeatureValue:(BOOL)arg0 forFeature:(id)arg1 ;


@end


#endif