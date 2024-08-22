// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSSETTINGSVALIDATOR_H
#define SBFTRAITSSETTINGSVALIDATOR_H

@class NSString;
@protocol SBFTraitsSettingsValidating;

#import <Foundation/Foundation.h>

#import "SBFTraitsSettingsOrientation.h"

@interface SBFTraitsSettingsValidator : NSObject <SBFTraitsSettingsValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SBFTraitsSettingsOrientation *orientationSettings; // ivar: _orientationSettings
@property (nonatomic, getter=didValidateOrientationSettings) BOOL orientationSettingsValidated; // ivar: _orientationSettingsValidated
@property (copy, nonatomic) NSString *orientationSettingsValidatedReason; // ivar: _orientationSettingsValidatedReason
@property (readonly) Class superclass;


-(void)validateOrientationSettingsWithBlock:(id)arg0 ;


@end


#endif