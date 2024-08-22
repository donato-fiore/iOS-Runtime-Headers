// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISACTIVITYALERTOPTIONS_H
#define ACUISACTIVITYALERTOPTIONS_H

@class TLAlertConfiguration, ACAlertPresentationOptions;

#import <Foundation/Foundation.h>


@interface ACUISActivityAlertOptions : NSObject

@property (readonly, nonatomic) TLAlertConfiguration *alertConfiguration; // ivar: _alertConfiguration
@property (readonly, nonatomic) ACAlertPresentationOptions *presentationOptions; // ivar: _presentationOptions


-(id)initWithAlertConfiguration:(id)arg0 presentationOptions:(id)arg1 ;


@end


#endif