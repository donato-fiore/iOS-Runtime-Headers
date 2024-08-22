// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISACTIVITYALERTPROVIDER_H
#define ACUISACTIVITYALERTPROVIDER_H

@class NSString;
@protocol ACUISActivityAlertProviding;

#import <Foundation/Foundation.h>

#import "ACUISActivityAlertOptions.h"

@interface ACUISActivityAlertProvider : NSObject <ACUISActivityAlertProviding>



@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ACUISActivityAlertOptions *options; // ivar: _options
@property (readonly) Class superclass;


-(NSInteger)_ActivityAlertAction:(NSInteger)arg0 ;
-(id)initWithActivityAlertProviding:(id)arg0 ;


@end


#endif