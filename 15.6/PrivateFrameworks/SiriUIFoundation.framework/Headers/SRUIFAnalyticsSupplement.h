// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRUIFANALYTICSSUPPLEMENT_H
#define SRUIFANALYTICSSUPPLEMENT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SRUIFAnalyticsSupplement : NSObject {
    NSString *_lastComputedRefId;
    int _lastComputedMode;
    NSArray *_generatedAceCommands;
}




-(int)computedModeForAceCommand:(id)arg0 ;
-(int)computedModeForRefId:(id)arg0 ;
-(void)didComputeMode:(int)arg0 forAceCommand:(id)arg1 generatedAceCommands:(id)arg2 ;


@end


#endif